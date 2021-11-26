# Translator Project

This a project was developed in 4 stages:

1) [Lexical Analyzer](https://github.com/marcellapantarotto/translator-project/tree/master/lexical-analyzer)
2) [Syntactic Analyzer](https://github.com/marcellapantarotto/translator-project/tree/master/syntax-analyzer)
3) [Semantic Analyzer](https://github.com/marcellapantarotto/translator-project/tree/master/semantic-analyzer)
4) [TAC Intermediate Code Generator](https://github.com/marcellapantarotto/translator-project/tree/master/tac-generator)

At each stage of the project there were improvements on what was implemented before. Therefore the last directory contains the project as a whole, including all parsers and scanners as well as the TAC intermediate code generator.

Within each directory there is a directory called "doc", which has the report sent in for each submission. This report explains the project in detail. But for a brief summary:

The lexical analyzer scans a program written in C-IPL language that has been passed in as input. The syntactic and semantic parsers do their due analysis and the intermediate code generator translates the program passed in as input into TAC language, very similar to Assembly. By passing this generated code to the TAC tool, the program is executed. The language specifications for C-IPL are described below.

## C-IPL Language Prerequisites:

- The data types of the language are int, float and list. The types int and float are simple. The declaration of a variable of type list is done by defining the basic type of the list (ex: int list and float list). As a restriction on the usual C syntax, the declaration of variables cannot be followed by an assignment.

- The language contains numeric constants (for integers and reals (yes, this includes negative numbers)) and the constant NIL (for lists); string constants are used only for printing.

- The binary arithmetic operations are addition, subtraction, multiplication, and division, with usual precedence rules and semantics.

- The logical operations are negation, disjunction and conjunction, with usual parity, precedence rules and semantics. There is no boolean type in the language: just as in C, non-zero values and NIL are treated as true.

- The binary relational operations are the usual arithmetic ones: less than, less than or equal to, greater than, greater than or equal to, equal and different, with the usual precedence rules and semantics. The only exception is for the equal and different comparators for comparing a list with the constant NIL.

- Implicit conversions between arithmetic expressions should be handled in the usual way, allowing both type expansion (in the case of arithmetic computation and comparison, parameter passing by copy and function return) and type reduction (in the case of assignment, parameter passing by copy and function return). There is no type conversion between lists and the other types (or vice versa). If it is possible to identify the attempt to perform operations between operands that do not admit conversion between them, the translator must issue a warning that the operation is undefined. The conversion from float to int is done by discarding the decimal part (not by rounding; overflow, as usual, corresponds to undefined behavior).

- A program consists of a sequence of variable and function declarations, where each declared function is followed by its definition (i.e. a command block, containing variable declarations and command blocks). Every function has a declared return type which can be any of the primitive types of the new language (int, float, list). Unlike C, any function can have zero arguments (note that there is no VOID type in the language; but this must be specified as an empty list of parameters).

- Necessarily, the program must contain a "main" function.

- The scoping rules are the same as in C. A variable or function can only be used after it has been declared and in its respective scope.

- The assignment command has the usual syntax. In case the variable is integer or real, the semantics is the usual. For lists, see below.

- The language commands for flow control are restricted to the following: conditional (if, if-else), iteration (for), function call and return. All commands have the usual semantics for the C language fragment.

- The language commands for input and output are read, write, writeln. The read command parameter is a simple type variable; the write command parameter is a simple type expression or a constant. The writeln command is equivalent to the write command followed by the line break write.

- When calling functions, integer and real types are passed by copy; the list type is passed by reference.

- Every function returns an expression of the declared return type.

- Operations on lists are described below:

  - Declaration: int list, float list.

  - Assignment: the assignment is made by reference.

  - Constructors (right associative): the constant NIL has already been mentioned; the operator : is the infixed binary constructor of lists: the left operand is an expression (rvalue) and the left operand is a list (lvalue). The element is always added to the beginning of the list.

  - Operators (right associative):

    - header: ? is the unary operator that returns the value of the first element of a list; the list remains unchanged; using the operator on an empty list has undefined behavior.

    - tail: ! is unary operator that returns the tail of a list; the list remains unchanged; use of the operator on an empty list has undefined behavior.

  - Destructor (right associative):

    - tail: % is unary operator that returns the tail of the list; the list has its first element removed; using the operator on an empty list has undefined behavior.

  - Functions (associative on the right):

    - map: >> is the infixed binary operator that takes as first argument a unary function and as second argument a list; it returns a list with the function applied to the elements of the second element; it does not change the list passed as argument.

    - filter: << is the infixed binary operator that takes as first argument a unary function and as second argument a list; it returns the list of elements of the second argument for which the function given as first argument returns non-zero value; it does not change the list passed as argument.

## Execution of what was sent in each step:

### Lexical Analyzer:
This executes only the lexical analyzer implemented for the first submission. It receives a program as input and recognizes the tokens accepted by the C-IPL language. If there is something that is not recognized as a token, then an error is thrown.

```bash
> cd lexical-analyzer
> flex -o src/lex.yy.c src/lex.l
> gcc -g -Wall src/lex.yy.c -o tradutor
> ./tradutor tests/<test_name>.c
```

### Syntax Analyzer:
This runs the lexical and syntactic parsers. The lexical continues with the same behavior and the syntactic builds the abstract tree of commands from the input file and checks for errors.

```bash
> cd syntax-analyzer
> make && make run
```

### Semantic Analyzer:
This runs the lexical, syntactic and semantic analyzers. The lexical and syntactic continue with the same behavior and the semantic performs some error checking, builds the annotated abstract tree and performs type conversions. All the proper conversions have been implemented, except those concerning list operations.

```bash
> cd semantic-analyzer
> make && make run
```

### TAC Intermediate Code Generator:
This runs the lexical, syntactic, semantic parsers and the intermediate code generator. The lexical, syntactic and semantic parsers continue with the same behavior and the intermediate code generator translates the commands from the input program into the TAC language and saves them in another file. The project is able to translate input and output, arithmetic operations, function declaration and function call, as well as parameter passing. Operations with lists have not been implemented.

```bash
> cd tac-generator
> make && make run
> ./tac tests/<output>.tac
```

The (tac-master)[https://github.com/marcellapantarotto/translator-project/tree/master/tac-master] directory contains the TAC tool that runs the translated program produced by this project. Inside the [tac-generator](https://github.com/marcellapantarotto/translator-project/tree/master/tac-generator) directory there is already an executable for this tool, but if you want to run the project to generate the executable, the steps are as follows:

Install Automake: `sudo apt install automake`

Simplified summary:

- `git clone https://github.com/lhsantos/tac`
- `cd tac sh autogen.sh`
- `./configure`
- `cd flex-bison sed -i 's/std::string& file/auto file/g' tac.yy`
- `cd ... make all`

Full summary:

- Go to https://github.com/lhsantos/tac and download the repository on your machine (`git clone https://github.com/lhsantos/tac `)
- Go to the cloned github folder and run the autogen.sh script (`sh autogen.sh`)
- Run the command to install (`./configure`)
- In the flex-bison folder, in the file tac.yy modify the line 579 from "std::string& file" to "auto file (`cd flex-bison sed -i 's/std::string& file/auto file/g' tac.yy `)
- Go back to the main folder and run make all (`cd ... make all`)