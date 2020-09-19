#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    if (((N >= -20) && (N <= 15)) || (N >= 50)) {
        if (N % 3 == 0) {printf("multiple\n");}
        else {printf("not multiple\n");}
    }
    else {printf("excluded\n");}
    return 0;
}
