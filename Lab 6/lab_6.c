
#include <stdio.h>

#include <math.h>
int main(void){
	double a,b,c;
	a=-2.0;
	b=0.5;
	while(fabs(a-b)>1e-10){
		c=(a+b)/2;
		if(c*c-c-1>0) a=c;
		else b=c;	
	}
	printf("%.10lf\n",c);

	a=2.0;
	b=0.5;
	while(fabs(a-b)/2>1e-10){
		c=(a+b)/2;
		if(c*c-c-1>0) a=c;
		else b=c;	
	}
	printf("%.10lf\n",c);
	return 0;

}

