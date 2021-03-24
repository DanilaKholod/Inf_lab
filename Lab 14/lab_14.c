#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    int* mass;
    mass = (int *)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++)
        scanf("%d", &mass[i]);
    for (int i = 0; i < N; i++) {
        printf("%3d", i + 1);
    }
    printf("\n");
    for (int i = 0; i < N; i++)
        printf("%3d", mass[i]);

    //bubble sort
    int tmp;
    for (int i = N - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (mass[j] > mass[j + 1])
            {
                tmp = mass[j];
                mass[j] = mass[j + 1];
                mass[j + 1] = tmp;
            }
        }
        printf("\n");
        printf("\n");
        for (int i = 0; i < N; i++) {
            printf("%3d", i + 1);
        }
        printf("\n");
        for (int i = 0; i < N; i++) {
            printf("%3d", mass[i]); }
    }
    printf("\n");
    free(mass);
    return 0;
}
