codeb: y.tab.o lex.yy.o list.o tree.o code_gen.o reducer.o
	gcc -g list.o tree.o reducer.o code_gen.o y.tab.o lex.yy.o -ly -ll -o codeb
reducer.o: reducer.c
	gcc -g -c -pedantic -Wall reducer.c
reducer.c: reducer.bfe
	bfe < reducer.bfe | iburg > reducer.c
tree.o: tree.c tree.h
	gcc -g -c -pedantic -Wall tree.c
code_gen.o: code_gen.c code_gen.h 
	gcc -g -c -pedantic -Wall code_gen.c
list.o: list.c list.h
	gcc -g -c -pedantic -Wall list.c
oxout.y oxout.l: ag.y scanner.l
	ox ag.y scanner.l
y.tab.c y.tab.h: oxout.y
	yacc -d -v oxout.y
lex.yy.c: oxout.l
	flex oxout.l
y.tab.o: y.tab.c
	gcc -c y.tab.c
lex.yy.o: lex.yy.c y.tab.h
	gcc -c lex.yy.c                                                                                                                                                                                                                   
clean:    
	rm -f codea reducer.c *.o oxout.* lex.yy.c y.tab.* y.output
