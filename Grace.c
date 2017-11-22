#include <stdio.h>
/*
	commentaire
*/
#define FP
#define FW
#define FU(x) int main(){FILE*f = fopen("Grace_kid.c", "w");char *c="#include <stdio.h>%1$c/*%1$c%4$ccommentaire%1$c*/%1$c#define FP%1$c#define FW%1$c#define FU(x) int main(){FILE*f = fopen(%2$cGrace_kid.c%2$c, %2$cw%2$c);char *c=%2$c%3$s%2$c;fprintf(f,c,10,34,c,9);}%1$cFU(1);%1$c";fprintf(f,c,10,34,c,9);}
FU(1);
