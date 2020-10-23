#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a = -2, b = 2;
    float e = 1e-6;
    float x1 = (a + b) / 2;
    float x2;
    float t1, t2;
    float a1, b1;
    if (x1*x1 - x1 - 1 < 0) {
        a1 = x1;
        b1 = b;
        while ((b - a) > e) {
            x1 = (a + b)/2;
            t1 = (a*a - a - 1)*(x1*x1 - x1 - 1);
            if (t1 < 0) {
                b = x1;
            }
            else {a = x1;}
        }
        while ((b1 - a1) > e) {
            x2 = (a1 + b1)/2;
            t2 = (a1*a1 - a1 - 1)*(x2*x2 - x2 - 1);
            if (t2 < 0) {
                b1 = x2;
            }
            else {a1 = x2;}
        }
    }
    printf("%.10lf\n", x1);
    printf("%.10lf\n", x2);
    return 0;
}
