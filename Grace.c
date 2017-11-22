#include <stdio.h>
#define FP
#define FW
#define FU() int main(){FILE*f = fopen("Grace_kid.c", "w");char *c="#include <stdio.h>%c#define FP%c#define FW%c#define FU() int main(){FILE*f = fopen(%cGrace_kid.c%c, %cw%c);char *c=%c%s%c;fprintf(f,c,10,10,10,34,34,34,34,34,c,34,10,10);}%cFU();%c";fprintf(f,c,10,10,10,34,34,34,34,34,c,34,10,10);}
FU();
