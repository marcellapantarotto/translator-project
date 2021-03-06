MARCELLA PANTAROTTO (13/0143880)

PROJECT 3: SEMANTIC ANALYZER 

THE NECESSARY PREREQUISITES ARE:
  $ sudo apt-get install flex
  $ sudo apt-get install bison

GCC should be in the version 11. If an update is needed do the following command:
  $ gcc --version
  $ gcc-11 --version
  $ sudo apt-get update gcc-11

If you wish to compile in GCC instead of GCC-11, please change lines 3 through 6 of Makefile to:
  $ gcc -o obj/structures.o -g -c src/structures.c
	$ bison --defines=lib/syn.tab.h src/syn.y -o src/syn.tab.c
	$ flex -o src/lex.yy.c src/lex.l
	$ gcc -g -Wall -o tradutor -I lib/ src/syn.tab.c src/lex.yy.c

Bison should be in the verison 3.7. If an update is needed do the following command:
  $ bison --version
  $ sudo apt-get update -y
  $ sudo apt-get install -y bison

TO COMPILE THE PROJECT, RUN THE FOLLOWING COMMANDS IN THE TERMINAL **WITHIN THE PROJECT'S MAIN DIRECTORY**
  $ make
  $ make run

TO RUN THE TESTS, CHANGE LINE 9 OF THE MAKE FILE, WHICH IS:
  ./tradutor tests/<input_file>

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