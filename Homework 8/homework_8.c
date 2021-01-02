#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

//example a = 789 b = 1 c = -5 D <0
//example a = 0.25 b = 2 c = 1 D = 0
void root(float a, float b, float c) {
    float D = (b*c - 1)*(b*c - 1) + 4*a*c;
    if (D > 0) {
        float x1 = (-(b*c - 1) + sqrt((b*c - 1)*(b*c - 1) + 4*a*c))/(2*c);
        float x2 = (-(b*c - 1) - sqrt((b*c - 1)*(b*c - 1) + 4*a*c))/(2*c);
        if ((x1 != -b) && (x2 != -b)) {
            printf("0\n");
            printf("%.6f\n", x1);
            printf("%.6f\n", x2);
        }
        if ((x1 != -b) && (x2 == -b)) {
            printf("1\n");
            printf("%.6f\n", x1);
        }
        if ((x1 == -b) && (x2 != -b)) {
            printf("1\n");
            printf("%.6f\n", x2);
        }
    }
    else if (D == 0) {
        float x = (-(b*c - 1))/(2*c);
        if (x != -b) {
            printf("1\n");
            printf("%.6f\n", x);
        }
        else {
            printf("3\n");
        }
    }
    else  {
        printf("2\n");
    }
}

void func(float x1, float x2) {
    float b, a;
	b= 1-(x1+x2);
	a= -x1*x2;
    if ((x1 == -b) && (x2 == -b)) {
        printf("3\n");
        printf("a = %d\n", a);
        printf("b = %d\n", b);
    }
	else if (x1==x2) {
		printf("1\n");
        printf("a = %d\n", a);
        printf("b = %d\n", b);
	}
    else if ((x1 != -b) && (x2 == -b)) {
        printf("1\n");
        printf("a = %d\n", a);
        printf("b = %d\n", b);
    }
    else if ((x1 == -b) && (x2 != -b)) {
        printf("1\n");
        printf("a = %d\n", a);
        printf("b = %d\n", b);
    }
    else if ((x1 != -b) && (x2 != -b)) {
		printf("0\n");
        printf("a = %d\n", a);
        printf("b = %d\n", b);
	}
}

int main()
{
    float a, b, c; scanf("%f%f%f", &a, &b, &c);
    root(a, b, c);
    float x1, x2; scanf("%f%f", &x1, &x2);
    func(x1, x2);
    return 0;
}
