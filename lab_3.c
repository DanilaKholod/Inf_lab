#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m; scanf("%d", &m);
    int k = 0;
    int num = 1;
    while (7*num < m) {
        num *= 7;
        k++;
    }
    printf("%d\n", k);
    printf("\n");
    int deg = 1;
    num = 1;
    while (deg <= 10) {
        num *= 7;
        printf("%3d  %d\n", deg, num);
        deg++;
    }
    return 0;
}
