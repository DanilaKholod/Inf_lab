#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <limits.h>
int main()
{

/*
	FILE *inp,*outp;


	srand(time(NULL));
	rand();
	outp=fopen("input.txt","w");
	int gen1=rand()%30+1,gen2;
	for(int i=0;i<gen1;i++){
		gen2=rand()%20+1;
		for(int j=1;j<gen2;j++)
			fprintf(outp,"%d ",rand());
		fprintf(outp,"%d\n",rand());
		}
	fclose(outp);


	/*inp=fopen("C:\\Users\\danil\\Desktop\\Самостоятельная работа 12\\input.txt","r");
	outp=fopen("C:\\Users\\danil\\Desktop\\Самостоятельная работа 12\\output.txt","w");

	char s[80],c;
	int mn=INT_MAX,m,mc,a[31],d[10]={0},k=0;
	*a=0;
	do{
		k++;
		*s=0;
		mc=INT_MAX;
		do{
			fscanf(inp,"%s",s);
			if(!strcmp(s,"")) break;

			m=atoi(s);
			if(m<mc) mc=m;
			while(m){
				d[m%10]++;
				m/=10;
			}

			c=getc(inp);
		}while(c!='\n');

		if(mc<mn){
			*a=0;
			mn=mc;
		}
		if(mc==mn){
			a[0]++;
			*(a+(*a))=k;
		}
	}while(*s!=0);

	for(int i=1;i<a[0];i++)
		fprintf(outp,"%d ",a[i]);
	fprintf(outp,"%d\n\n",a[a[0]]);
	for(int i=0;i<10;i++){
		fprintf(outp,"%d ",i);
		for(int j=0;j<(d[i]+1)/3;j++)
			putc('*',outp);
		fprintf(outp," %d\n",d[i]);
	}

	fclose(inp);
	fclose(outp);
*/



	char s[80],c,cl;
	int mn=INT_MAX,m,mc,a[31],d[10]={0},k=0,l;
	*a=0;
	do{
		k++;
		*s=0;
		mc=INT_MAX;
		do{
			l=0;
//			fscanf(stdin,"%s",s);
			while(isdigit(c=getc(stdin))){
				*(s+l)=c;
				l++;
			}
			*(s+l)=0;
//			printf("%s xXx \n",s);
			if(!*s) break;

			m=atoi(s);
			if(m<mc) mc=m;
			while(m){
				d[m%10]++;
				m/=10;
			}

		}while(c!='\n');

		if(mc<mn){
			*a=0;
			mn=mc;
		}
		if(mc==mn){
			a[0]++;
			*(a+(*a))=k;
		}
	}while(*s!=0);

	for(int i=1;i<a[0];i++)
		fprintf(stdout,"%d ",a[i]);
	fprintf(stdout,"%d\n\n",a[a[0]]);
	for(int i=0;i<10;i++){
		fprintf(stdout,"%d ",i);
		for(int j=0;j<(d[i]+1)/3;j++)
			putc('*',stdout);
		fprintf(stdout," %d\n",d[i]);
	}

	return 0;
}
