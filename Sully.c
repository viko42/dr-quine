#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	char tmp[20];

	int i = 5;
	if (i <= 0)
		return 0;
	sprintf(tmp, "Sully_%d.c", i);
	FILE *f = fopen(tmp, "w");
	i--;
	char *c="#include <stdio.h>%1$c#include <string.h>%1$c#include <stdlib.h>%1$cint main(){%1$c%5$cchar tmp[20];%1$cint i = %2$d;%1$c if (i <= 0) %1$creturn 0;%1$csprintf(tmp, %3$cSully_%%d.c%3$c, i);%1$cFILE*f = fopen(tmp, %3$cw%3$c);i--;%1$c%5$cchar *c=%3$c%s%3$c;%1$c%5$cfprintf(f,c,10,i,34,c,9);%1$c%5$cfclose(f);%1$c%5$cchar tmp2[200];%1$c%5$csprintf(tmp2, %3$cclang -Wall -Wextra -Werror -o Sully_%%d Sully_%%d.c%3$c, i, i);%1$c%5$csystem(tmp2);%1$c%5$csprintf(tmp2, %3$c./Sully_%%d%3$c, i);%1$c%5$csystem(tmp2);%1$c%5$creturn(0);%1$c}%1$c";
	fprintf(f,c,10,i,34,c,9);
	fclose(f);
	char tmp2[200];
	sprintf(tmp2, "clang -Wall -Wextra -Werror -o Sully_%d Sully_%d.c", i, i);
	system(tmp2);
	sprintf(tmp2, "./Sully_%d", i);
	system(tmp2);
	return (0);
}
