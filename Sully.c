#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	int main(){
	char tmp[20];
	int i = 5;
	if (i <= 0)
		return 0;
	char *env=getenv("_");if (!strstr(env, "./Sully_")) { i++; }sprintf(tmp, "Sully_%d.c", i-1);
	FILE*f = fopen(tmp, "w");
	char *c="#include <stdio.h>%1$c	#include <string.h>%1$c	#include <stdlib.h>%1$c	int main(){%1$c%5$cchar tmp[20];%1$c%5$cint i = %6$d;%1$c%5$cif (i <= 0)%1$c%5$c%5$creturn 0;%1$c%5$cchar *env=getenv(%3$c_%3$c);if (!strstr(env, %3$c./Sully_%3$c)) { i++; }sprintf(tmp, %3$cSully_%%d.c%3$c, i-1);%1$c%5$cFILE*f = fopen(tmp, %3$cw%3$c);%1$c%5$cchar *c=%3$c%s%3$c;%1$c%5$cfprintf(f,c,10,i,34,c,9,i-1);%1$c%5$cfclose(f);%1$c%5$cchar tmp2[200];%1$c%5$csprintf(tmp2, %3$cclang -Wall -Wextra -Werror -o Sully_%%d Sully_%%d.c%3$c, i-1, i-1);%1$c%5$csystem(tmp2);%1$c%5$csprintf(tmp2, %3$c./Sully_%%d%3$c, i-1);%1$c%5$csystem(tmp2);%1$c%5$creturn(0);%1$c}%1$c";
	fprintf(f,c,10,i,34,c,9,i-1);
	fclose(f);
	char tmp2[200];
	sprintf(tmp2, "clang -Wall -Wextra -Werror -o Sully_%d Sully_%d.c", i-1, i-1);
	system(tmp2);
	sprintf(tmp2, "./Sully_%d", i-1);
	system(tmp2);
	return(0);
}
