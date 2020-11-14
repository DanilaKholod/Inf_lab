#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double S (int r, double pi) {return r*r*pi;}
double V(double S, int h) {return S*h;}
double R(double V) {
    double R_3 = (3 * V) / (4 * M_PI);
    double res = pow(R_3, 1.0 / 3.0);
    return res;
}

int main()
{
    double s, v;
    int r, h;
    double max = 10000000;
   for (int i = 1; i <= 50; i++) {
    for (int j = 1; j <= 50; j++) {
        s = S(j , M_PI);
        v = V(s, i);
        if ( v/s < max && v/s > 1) {
            max = v/s;
            r = j;
            h = i;
        }
    }
   }
   int S_c = S(r, M_PI);
   int V_c = V(S_c, h);
   double r_c = R(V_c);
   printf("%d\n", r);
   printf("%d\n", h);
   printf("%.6f\n", r_c);
}
