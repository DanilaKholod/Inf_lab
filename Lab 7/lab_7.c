#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double m[70];
    double x = -7;
    double sum = 0;
    double min = 10;
    int k = 0;
    for (int i = 0; i <= 70;i++) {
        m[i] = 4 * sin(3 * x);
        x += 0.2;
    }
    for (int i = 0; i <= 70;i++) {
        if (m[i] < 0) {sum += m[i]; k++;}
        if (m[i] < min && (i % 2 == 0)) {
            min = m[i];
        }
    }
    printf("%.6f\n", min);
    printf("%.6f\n", sum / k);
    return 0;
}
