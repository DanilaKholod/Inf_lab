#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void fout(int *a,int n){
	for(int i=1;i<=n;i++)
		printf("%3d",i);
	printf("\n");
	for(int i=0;i<n;i++)
		printf("%3d",*(a+i));
	printf("\n\n");
	return;
}

void foutstar(int **a,int n){
	for(int i=1;i<=n;i++)
		printf("%3d",i);
	printf("\n");
	for(int i=0;i<n;i++)
		printf("%3d",*(a[i]));
	printf("\n\n");
	return;
}



void swapstar(int **x, int **y)
{
 	int *temp;
 	temp=*x;
 	*x=*y;
	*y=temp;
}


int main(void)
{
	int *a,*b,**c,n,m;

	scanf("%d",&n);

	a = (int *) malloc(n*sizeof(int));
	for(int i=0;i<n;i++) scanf("%d",(a+i));

	scanf("%d",&m);

	b = (int *) malloc(m*sizeof(int));
	for(int i=0;i<m;i++) scanf("%d",(b+i));


	fout(a,n);
	fout(b,m);


	c = (int **) malloc((n+m)*sizeof(int *));
	for(int i=0;i<n;i++) *(c+i)=a+n-1-i;
	for(int i=0;i<m;i++) *(c+i+n)=b+i;

	for(int i=0;i<n+m-1;i++)
		for(int j=0;j<n+m-1-i;j++)
			if( *c[j] > *c[j+1] )
				swapstar(c+j,c+j+1);



	foutstar(c,n+m);

	free(c);
	free(b);
	free(a);

	return 0;
}
