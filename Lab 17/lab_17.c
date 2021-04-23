#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n][m];
	for (int i = 0; i < n; i++) {
		if (i%2==1) {
			for (int j = m-1; j >= 0; j--) {
        		scanf("%d", &a[i][j]);
			}
		}
		if (i%2==0) {
			for (int j = 0; j < m; j++) {
        		scanf("%d", &a[i][j]);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
        	printf("%3d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	int s=0, smax=0;
	int b[n];
	for (int l=0; l<m; l++) {smax+=a[0][l];}
	for (int l=0; l<n; l++) {b[l]=0;}
 	for (int i=0; i<n; i++) {
 		for (int j=0; j<m; j++) {s+=a[i][j];}
		if (s == smax) {
			b[i]=i+1;
			//for (int i=0; i<n; i++) {printf("b1[%d]=%d ", i, b[i]);}
			//printf("\n");
		}
 		if (s > smax) {
			for (int l=0; l<n; l++) {b[l]=0;}
			b[i]=i+1;
 			smax=s;
		}
		s=0;
 	}
	for (int i=0; i<n; i++) {if (b[i]!=0) {
            if (i != n - 1) {
                printf("%d ", b[i]);
            }
            else {
                printf("%d\n", b[i]);
            }
		}
	}
	return 0;
}
