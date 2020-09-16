#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int a, b, c, d;
    scanf("%d", &N);
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int new_number = 1000 * (N % 10) + 100 * ((N / 10) % 10) + 10 * ((N / 100) % 10) + N / 1000;
    printf("%d\n", new_number * 2);
    printf("\n");
    int k1 = 1;
    int k2 = -(a + b + c + d);
    int k3 = c*d + b*d +c*b + a*d + a*c + a*b;
    int k4= -(c*b*d + a*c*d+a*b*d+a*b*c);
    int k5 = a * b * c * d;
    printf("%5d%5d%5d%5d%5d\n", 4, 3, 2, 1, 0);
    printf("%5d%5d%5d%5d%5d\n", k1, k2, k3, k4, k5);
    return 0;
}
