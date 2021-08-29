############################# Makefile ##########################
compile:
	gcc -o obj/structures.o -g -c src/structures.c
	bison -o src/syn.tab.c -d src/syn.y 
	flex -o src/lex.yy.c src/lex.l

	gcc -g -Wall -o obj/syntax.o src/syn.tab.c src/lex.yy.c -lfl

#gcc -g -Wall -o tradutor src/lex.yy.c
#gcc -g -Wall src/syn.tab.c src/lex.yy.c obj/structures.o

run:
# ./tradutor tests/test_correct1.c
	./obj/syntax.o tests/test_syn.c
	
debug:
	valgrind -v --tool=memcheck --leak-check=full --log-file="logfile.out" --show-leak-kinds=all --track-origins=yes ./tradutor tests/test_correct1.c

