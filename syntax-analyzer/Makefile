############################# Makefile ##########################
compile:
	gcc -o obj/structures.o -g -c src/structures.c

	flex -o src/lex.yy.c src/lex.l
	gcc -g -Wall -o tradutor src/lex.yy.c

# bison -o src/syn.tab.c -d src/syn.y 
# gcc -o obj/syntax syn_test.tab.c lex.yy.c -lfl

# gcc -g -Wall src/syn.tab.c src/lex.yy.c obj/structures.o

run:
	./tradutor tests/test_correct1.c
	
debug:
	valgrind -v --tool=memcheck --leak-check=full --log-file="logfile.out" --show-leak-kinds=all --track-origins=yes ./tradutor tests/test_correct1.c

