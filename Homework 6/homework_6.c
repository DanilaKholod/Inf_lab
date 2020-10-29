#include <stdio.h>
#include <stdlib.h>
#include <math.h>
static long long int
factorial (int n)
{
  return (n < 2) ? 1 : n * factorial (n - 1);
}
int main()
{

    //first solution
    double a1 = 0, b1 = 2;
    double e = 1e-7;
    double x1;
    double t1;
    double L1 = 2;
    while (fabs(b1 - a1) > e) {
        x1 = (a1 + b1)/2;
        t1 = (sin(a1) - (double) 2/5)*(sin(x1) - (double) 2/5);
        if (t1 < 0) {
            b1 = x1;
        }
        else {a1 = x1;}
        L1 /= 2; //count
    }

    //second solution
    double a2 = 2, b2 = 4;
    double x2;
    double t2;
    double L2 = 2;
    while (fabs(b2 - a2) > e) {
        x2 = (a2 + b2)/2;
        t2 = (sin(a2) - (double) 2/5)*(sin(x2) - (double) 2/5);
        if (t2 < 0) {
            b2 = x2;
        }
        else {a2 = x2;}
        L2 /= 2; //count
    }

    //sum x1
    double eps = 1e-6;
    double sum1 = 0;
    double degree1;
    int n1 = -1;
    while (fabs((double)sin(x1) - sum1) > eps) {
        n1++;
        degree1 = x1;
        if (n1 % 2 == 0) {
            for(int i = 1; i < 2*n1 + 1; i++) {degree1 *= x1;}
            sum1 += (degree1/factorial(2*n1+1));
        }
        else {
            for(int i = 1; i < 2*n1 + 1; i++) {degree1 *= x1;}
            sum1 -= (degree1/factorial(2*n1+1));
        }
    }

    //sum x2
    double sum2 = 0;
    double degree2;
    int n2 = -1;
    long long int fact;
    while (fabs((double)sin(x2) - sum2) > eps) {
        n2++;
        degree2 = x2;
        //printf("%d\n",n2);
        if (n2 % 2 == 0) {
            for(int j = 1; j < 2*n2 + 1; j++) {degree2 *= x2;}
            fact = factorial(2*n2+1);
            sum2 += (degree2/fact);
            //printf("%.7f %d\n",degree2/fact,n2);
        }
        else {
            for(int j = 1; j < 2*n2 + 1; j++) {degree2 *= x2;}
            fact = factorial(2*n2+1);
            sum2 -= (degree2/fact);
            //printf("%.7f %d\n",degree2/fact,n2);
        }
        //printf("%.6f\n", sum2);
    }

    printf("%.7f\n", x1); //print x1
    printf("%.8f\n", L1); //print d
    printf("%.6f\n", sum1);
    printf("%d\n", n1);

    printf("%.7f\n", x2); //print x2
    printf("%.8f\n", L2); //print d
    printf("%.6f\n", sum2);
    printf("%d\n", n2);
    return 0;
}
