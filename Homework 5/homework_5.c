#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
int main()
{
    int n = 1;
    double cor, Scor, fcor;
    double f = 0, S = 0;
    double answer = 1.0;
    double epsilon = 1e-10;
    while (fabs(answer - S) > epsilon) {
        f = (double) 1/((double)n * (double)(n + 1));
        fcor = f - cor;
        Scor = S + fcor;
        cor = (Scor - S) - fcor;
        S = Scor;
        printf("%.7f, S = %.10lf\n", f, S);
        n++;
    }
    printf("%.10lf\n", answer);
    printf("%.10lf\n", S);
    printf("%.10lf\n", answer - S);
    printf("%d\n",n);
    return 0;
}
