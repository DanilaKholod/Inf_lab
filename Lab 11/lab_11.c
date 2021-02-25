#include <stdio.h>
#include <stdlib.h>
void mas(int array[], int k, int a, int b) {
    int i = 0;
    for(i; i < k; i++) {
        array[i] = a*(i + b);
    }
}
void print(int array[], int k) {
    int i = 0;
    for (i; i < k; i++) {
        printf("%5d", i + 1);
    }
    printf("\n");
    int j = 0;
    for (j; j < k; j++) {
        printf("%5d", array[j]);
    }
}
int main()
{
    int a1, b1;
    scanf("%d%d", &a1, &b1);
    int m1[8];
    mas(m1, 8, a1, b1);

    int a2, b2;
    scanf("%d%d", &a2, &b2);
    int m2[12];
    mas(m2, 12, a2, b2);

    print(m1, 8);
    printf("\n");
    printf("\n");
    print(m2, 12);
    printf("\n");
    return 0;
}
