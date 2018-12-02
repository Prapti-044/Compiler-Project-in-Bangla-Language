%{
	#include <stdio.h>
	#include <math.h>
	#define var 180
	#define pi  3.1416
	#include<stdlib.h>
	#include<string.h>

	typedef struct valueid {
		char *name;
		int type;
		double val;
	} ids;

	ids sym2[10];
	int count = 0;

	int sym[26];

	struct valueid* checkId(char* id);
	ids* makeId(char* id, int type, double val);
%}

%union {
  double DOB;   
  int IN;
  char *id;
}

%token <DOB>  Number    
%token <id>  Variable  
%type  <DOB>  expression 
%type  <DOB>  subsent
%type  <IN>  bool_expr
%type  <IN>  Variables
%token  <id>  FUNCTION

%token AR INC DEC LP RP AND OR NOT KASE RET DIE ELSE_IF START_BLOCK THAN ASSIGN END_BLOCK Var BOOL_EXPR_CLOSE JODI ELSE Main End INT FLOAT SUM SUB MUL DIV FOR WHILE DO LT GT GTE LTE shesh SINE COS TAN LN FACTORIAL TOTHEPOWER Switch Case1 Case2 Case3
%nonassoc IFX
%nonassoc ELSE
%nonassoc ASSIGN
%left AND OR NOT
%left LT GT LTE GTE
%left SINE COS TAN LN
%left SUM SUB
%left MUL DIV
%left FACTORIAL
%left TOTHEPOWER
%left INC DEC

%%

sentence: /* empty */
	| sentence subsent
	| sentence ghosona
	;
	
ghosona: TYPE Variable shesh	{ 
		ids *a = checkId($2);
		if(a == NULL) {
			ids *x = makeId($2, 1, 0);
			printf("Declared variable-> %s : %lf\n", x->name, x->val);
		}
		else {
			printf("Already Declared variable : %s !\n", $2);
		}
	}
	| TYPE Variable ASSIGN expression shesh {
		ids *a = checkId($2);
		if(a == NULL) {
			ids *x = makeId($2, 1, $4);
			printf("Declared variable-> %s : %.10g\n", x->name, x->val);
		}
		else {
			printf("Already Declared variable : %s !\n", $2);
		}
	}
	;
			
TYPE : INT
     | FLOAT
     ;

subsent: shesh {
		printf("Found empty statement\n");
	}

	| Variable ASSIGN expression shesh {
		ids* a = checkId($1);
		if(a) {
			a->val = $3;
			$$ = $3;
			printf("Updated variable-> %s : %.10g\n", $1, $3);
		}
		else {
			printf("Variable %s not declared!\n", $1);
		}
	}

	| expression shesh { 
		$$ = $1; 
		printf("Value of expression: %.10g\n", $1); 
	}
	

	| JODI LP bool_expr RP STMNT_BLOCK {
								if($3)
								{
									printf("Expression in if is true\n");
								}
								else
								{
									printf("Expression in if is false\n");
								}
							}

	| JODI LP bool_expr RP STMNT_BLOCK ELSE STMNT_BLOCK {
								 	if($3)
									{
										printf("Expression in if is true\n");
									}
									else
									{
										printf("Expression in if is false\n");
									}
								   }


	| JODI LP bool_expr RP STMNT_BLOCK ELSE_IF_BLOCK ELSE STMNT_BLOCK {
		if($3) {
			printf("Expression in if is true\n");
		}
		else {
			printf("Expression in if is false\n");

		}
	}
	| FOR LP Variable ASSIGN expression shesh Variable LTE expression shesh Variable INC RP STMNT_BLOCK {
		ids *a = checkId($3);
		if(a == NULL) {
			a = malloc(sizeof(ids));
		}
		int start = (int)$5;
		int end = (int)$9;
		
		for(a->val = start; a->val <= end; a->val+=1)
			printf("FOR : value of %s = %d\n", $3, (int)a->val);
		
	}
	
	| Switch LP Variable RP Cases END_BLOCK {
		ids *a = checkId($3);
		if(a) {
			printf("Successful Switch Statement with \n\tvariable %s\n\tcase : %d\n", $3, (int)(a->val));
		}
		else {
			printf("Variable %s not declared!\n", $3);
		}
	}

	| FUNCTION LP Variables RP FUNC_BLOCK {
		printf("Successfully created function : %s with %d variables\n", $1, $3);
	}
	;

FUNC_BLOCK: START_BLOCK sentence RET_STMNT END_BLOCK {

}
;

RET_STMNT: RET expression shesh{

} 
Variables: Variable { $$ = 1; }
	| Variable AR Variables { $$ = 1 + $3; }

Cases: /*empty*/
	| Case Cases { }
	;
Case: KASE Number STMNT_BLOCK {
	if($2) {
		printf("Case %d is done\n", (int)$2);
	}
}

ELSE_IF_BLOCK:  /* NULL */
	| ELSE_IF LP bool_expr RP STMNT_BLOCK ELSE_IF_BLOCK {
		if($3) {
			printf("Expression in else if is : true");
		}
		else {
			printf("Expression in else if is : true");

		}
}

STMNT_BLOCK: START_BLOCK sentence END_BLOCK {
	printf("Block Successfully Parsed\n");
 }

expression: Number		{ $$ = $1; 	}
	
	| LP expression RP { $$ = $2; }
	| Variable			{
		ids *a = checkId($1);
		if(a) {
			$$ = a->val;
		}
		else {
			$$ = 0 ;
			printf("Variable not declared!\n");
		}
	}

	| expression SUM expression	   { $$ = $1 + $3; }

	| expression SUB expression	   { $$ = $1 - $3; }

	| expression MUL expression	   { $$ = $1 * $3; }

	| expression DIV expression	   { 	if($3) 
				  		{
				     			$$ = $1 / $3;
				  		}
				  		else
				  		{
							$$ = 0;
							printf("\ndivision by zero\t");
				  		} 	
				    	}

						
	| expression SINE { $$=sin($1 * pi / var); printf(" sin value %.10g\n",$$); }
	| expression COS { $$=cos($1 *pi / var); printf(" cos value %.10g\n",$$); }
	| expression TAN { $$=tan($1 *pi / var); printf(" tan value %.10g\n",$$); }
	| expression LN { $$=log($1); printf(" ln value %.10g\n",$$); }	

    | expression FACTORIAL {
						int mult=1 ,i;
						for(i=$1;i>0;i--)
						{
							mult=mult*i;
						}
						$$=mult;
						printf("factorial value !%.10g\n",$$); 
					 }	
					 
	| expression TOTHEPOWER expression { $$=pow($1,$3); printf("To the power value %.10g\n",$$); }				 
	
        ;
bool_expr: expression GT expression {
	$$ = $1 > $3;
	printf("bool_expr [>]: %d\n", $$);
}
	| expression LT expression {
	$$ = $1 < $3;
	printf("bool_expr [<]: %d\n", $$);
}
	| expression GTE expression {
	$$ = $1 >= $3;
	printf("bool_expr [>=]: %d\n", $$);
}
	| expression LTE expression {
	$$ = $1 <= $3;
	printf("bool_expr [<=]: %d\n", $$);
}
	| bool_expr AND bool_expr {
		$$ = $1 && $3;
	printf("bool_expr AND: %d\n", $$);
	}
	| bool_expr OR bool_expr {
		$$ = $1 && $3;
	printf("bool_expr OR: %d\n", $$);
	}
	| NOT bool_expr {
		$$ = !($2);
	printf("bool_expr NOT: %d\n", $$);
	}
	| LP bool_expr RP { $$ = $2;
			printf("bool_expr bracket: %d\n", $$);
	}

%%

struct valueid *checkId(char* id) {
	for(int i = 0; i<count; i++) {
		if(strcmp(sym2[i].name, id) == 0) {
			return sym2+i;
		}
	}
	return NULL;
}

ids* makeId(char* id, int type, double maan) {
	ids *val = malloc(sizeof(ids));
	char *name = malloc(sizeof(char)*10);
	strcpy(name, id);
	val->name = name;
	val->type = type;
	val->val = (double) maan;
	sym2[count++] = *val;
	return val;
}

int yywrap()
{
return 1;
}

yyerror(char *s){
	printf( "%s\n", s);
}
