#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int N = 200000000;
    int i = 1;
    double sum = 0.0;
    double cor = 0.0;
    double S = 0.0, Scor = 0.0;
    double epsilon = 0.0, f = 0.0, fcor = 0.0;
    for (i; i <= N; i++) {
        /*without cor*/
        f = sqrt( (3 + 2*(double)i)/(4 + (double)i) );
        sum += f;
        /*with cor*/
        fcor = f - cor;
        Scor = S + fcor;
        cor = (Scor - S) - fcor;
        S = Scor;
        if (i % 20000000 == 0) {
            epsilon = sum - S;
            printf("%9d%18.4f%18.4f%10.4f\n", i, sum, S, epsilon);

        }
    }
    return 0;
}
