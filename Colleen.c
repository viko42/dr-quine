/*
	commentaire1
*/
#include <stdio.h>
void func(){};int main(){
/*
	commentaire2
*/
char *c="/*%1$c%4$ccommentaire1%1$c*/%1$c#include <stdio.h>%1$cvoid func(){};int main(){%1$c/*%1$c%4$ccommentaire2%1$c*/%1$cchar *c=%2$c%s%2$c;printf(c,10,34,c,9);func();}%1$c";printf(c,10,34,c,9);func();}
