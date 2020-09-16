#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int sum = (N % 10) + (N / 10);
    int res = N - sum;
    printf("%d\n", res);
    return 0;
}
