# Simple-C-Parser

### The folder has the scanner.l file which is the lex program that features the various rules, declarations of variables of functions, definitions and contains various regular expressions for all the specific actions that are to be carried out by a lexical analyzer. 

### It also has the functions written in C that directs the compiler how the output of tokens generated must be redirected to a file. We have three output files being generated. Parsetable, constantTable and symbolTable text files. ParseTable contains the entire code being parsed, Symboltable features all the symbols parsed, and constant table has all the constant being used in the input file.


## Commands to execute
------------------------
1. lex scanner.l
2. gcc lex.yy.c
3. ./a.out test\ cases/Case1.c (Parse Successful message)
4. ./a.out test\ cases/Case2.c (Parse Unsuccessful message)
5. cat symbolTable.txt 
	       It represents the various lexemes that are part of the program, indicates the type and attribute value assigned, and the line number where it is present.
6. cat parsedTable.txt
         It shows the tokens of the whole code, it includes various different types rather than restrciting to just identifiers.
7. cat constantTable.txt
         It shows the constants used in the whole code.
