############################# Makefile ##########################
compile:
	gcc -o obj/structures.o -g -c src/structures.c
	bison --defines=lib/syn.tab.h src/syn.y -o src/syn.tab.c
	flex -o src/lex.yy.c src/lex.l
	gcc -g -Wall -o tradutor -I lib/ src/syn.tab.c src/lex.yy.c -lfl 

run:
	./tradutor tests/test_correct1.c
#	./tradutor tests/test_correct2.c
#	./tradutor tests/test_errors1.c
# ./tradutor tests/test_errors2.c
	
debug:
	valgrind -v --tool=memcheck --leak-check=full --log-file="logfile.out" --show-leak-kinds=all --track-origins=yes ./tradutor tests/test_correct1.c
