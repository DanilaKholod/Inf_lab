#include <stdio.h>
#include <ctype.h>
#include <limits.h>
#include <string.h>
#define IN 1
#define OUT 0

int main(void) {

//	FILE *fp; /* указатель на файл */
//	fp = fopen("myfile.txt","w");

	int c,nc,state = OUT;
	nc = 0;
	int mn= 0;
	char ans[256],s[256];
	do{
		c = getchar();
		if (isspace(c)){
			if(state == IN){
				s[nc]=0;

//				fprintf(fp,"%s\n",s);

				puts(s);
				if(mn < nc){
					strcpy(ans,s);
					mn = nc;
				}
				nc = 0;
				state = OUT;
				*s=0;
			}
		}
		else {
			if (state == OUT){
				state = IN;
			}
			s[nc]=c;
			nc++;
		}
	} while (c != '\n');
	putchar('\n');
	puts(ans);

//	fprintf(fp,"\n%s\n",ans);
//	fclose(fp);

	return 0;
}

