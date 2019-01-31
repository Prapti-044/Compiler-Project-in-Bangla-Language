# Compiler-Project-in-Bangla-Language
It is a Compiler project based on c plus plus syntax with Bengali identifiers

## Introduction

Compiler is a computer software that transforms computer code written in one programming language into another programming language. Compilers are a type of translator that support digital devices. The name compiler is primarily used for programs that translate source code from a high-level programming language to a lower level language to create an executable program.

## Phases Of Compilation

The compilation process is a sequence of various phases. Each phase takes input from its previous stage, has its own representation of source program, and feeds its output to the next phase of the compiler. Let us understand the phases of a compiler.

In my project, I have gone done two phases. That are

1. Lexical Analysis
2. Syntax Analysis

## Lexical Analysis

I have used flex to generate token from the string of yytext. Then i returned those to the bison file for Syntax Analysis.

## Syntax Analysis

For syntax analysis, I have used bison. My type for bison is :

```
%union {
  double DOB;
  int IN;
  char *id;
}
```
And for variable symbol table,
```
struct valueid {
		char *name;
		int type;
		double val;
}
```
## Getting Started

Start from here: https://github.com/Prapti-044/Compiler-Project-in-Bangla-Language
Install pre-requisite dependencies

### Prerequisites

[Bison](http://bison-project.eu/)
[Flex](https://flex.com/)
Any kind of Text Editor

## Versioning

flex version 2.6.4
bison version 3.0.4

## Authors

Shadmaan Hye Prapti
praptishadmaan@gmail.com
Student at Department of Computer Science and Engineering
Khulna University of Engineering & Technology, Khulna
Bangladesh
