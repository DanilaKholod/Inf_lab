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

void func(int sit, float x1, float x2) {
    if (sit == 2) {
        int a, b;
        float D;
        for (int i = INT_MIN; i < INT_MAX; i++) {
            for (int j = INT_MIN; j < INT_MAX; j++) {
                D = (j - 1)*(j - 1) + 4*i;
                if (D < 0) {
                    b = j;
                    break;
                }
            }
            if (D < 0) {
                    a = i;
                    break;
            }
        }
        printf("a = %d\n", a);
        printf("b = %d\n", b);
    }
    if (sit == 0) {
        int a, b;
        float root1;
        float root2;
        for (int i = -1000; i < 1000; i++) {
            for (int j = -1000; j < 1000; j++) {
                root1 = (-(j - 1) + sqrt((j - 1)*(j - 1) + 4*i))/2;
                root2 = (-(j - 1) - sqrt((j - 1)*(j - 1) + 4*i))/2;
                if (root1 == x1 && root2 == x2) {
                    b = j;
                    break;
                }
            }
            if (root1 == x1 && root2 == x2 ) {
                    a = i;
                    break;
            }
        }
        printf("a = %d\n", a);
        printf("b = %d\n", b);
    }



}
int main()
{
    float a, b, c; scanf("%f%f%f", &a, &b, &c);
    root(a, b, c);
    int sit; scanf("%d", &sit);
    float x1, x2; scanf("%f%f", &x1, &x2);
    func(sit, x1, x2);
    return 0;
}
