calc: y.tab.c lex.yy.c
	gcc y.tab.c lex.yy.c -o comp_cs
	
y.tab.c: comp_cs.y
	bison -d comp_cs.y -o y.tab.c
	
lex.yy.c: comp_cs.l
	lex comp_cs.l
	
clean:
	rm comp_cs
	rm lex.yy.c
	rm y.tab.c
	rm y.tab.h
