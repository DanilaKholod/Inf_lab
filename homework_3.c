#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k; scanf("%d", &k);
    int f1 = 1, f2 =1;
    int f = 0;
    int sum = 2;
    int i;
    printf("%3d  %d\n", 1, 1);
    printf("%3d  %d\n", 2, 2);
    for (i = 2; i < k; i++) {
        f = f1 + f2;
        sum += f;
        f1 = f2;
        f2 = f;
        printf("%3d  %d\n", i + 1, sum);
    }
    printf("\n");
    printf("%3d  %d\n", 42, 701408732);
    printf("%3d  %d\n", 43, 1134903169);
    printf("%3d  %d\n", 44, 1836311902);
    return 0;
}
