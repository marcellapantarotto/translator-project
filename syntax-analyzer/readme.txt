MARCELLA PANTAROTTO (13/0143880)

PROJECT 2: SYNTAX ANALYZER 

THE NECESSARY PREREQUISITES ARE:
$ sudo apt-get install flex
$ sudo apt-get install bison

TO COMPILE THE PROJECT, RUN THE FOLLOWING COMMANDS IN THE TERMINAL **WITHIN THE PROJECT'S MAIN DIRECTORY**
$ make
$ make run

TO RUN THE TESTS, CHANGE LINE 9 OF THE MAKE FILE, WHICH IS: ./tradutor tests/<input_file>
THE OPTIONS ARE LISTED BELLOW:

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
