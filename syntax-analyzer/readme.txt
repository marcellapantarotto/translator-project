MARCELLA PANTAROTTO (13/0143880)

PROJECT 1: LEXICAL ANALYSER

THE NECESSARY PREREQUISITES ARE:
$ sudo apt-get install flex

TO COMPILE THE PROJECT, RUN THE FOLLOWING COMMANDS IN THE TERMINAL **WITHIN THE PROJECT'S MAIN DIRECTORY**
$ flex -o src/lex.yy.c src/lex.l
$ gcc -g -Wall src/lex.yy.c -o tradutor

TO RUN THE TESTS, RUN THE FOLLOWING COMMANDS IN THE TERMINAL **WITHIN THE MAIN PROJECT DIRECTORY**:

TESTS THAT ARE CORRECT:
test 1:
$ ./tradutor tests/test_correct1.c

test 2:
$ ./tradutor tests/test_correct2.c

TEST WITH ERRORS:
test 1:
$ ./tradutor tests/test_errors1.c

test 2:
$ ./tradutor tests/test_errors2.c
