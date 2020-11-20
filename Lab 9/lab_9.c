#include <stdio.h>
#include <stdlib.h>
void four(long int a) {
    long int i;
    long int four = 1;
    long int number = 0;
    while (a != 0) {
        i = a % 10;
        i *= four;
        four *=4;
        number += i;
        a /= 10;
    }
    printf("%d\n", number);
}
void ten(long int b) {
    long int i;
    long int ten = 1;
    long int number = 0;
    long int t = b;
    while (b != 0) {
        i = b % 4;
        i *= ten;
        ten *= 10;
        if (number <= 2133333333 - i && number >= -2133333333 + i) {
            number += i;
            b /= 4;
        }
        else {
            printf("%d\n", t);
            printf("!\n");
            return;
        }
    }
    if (number <= 2133333333 && number >= -2133333333) {
    printf("%d\n", number);
    }
}
int main()
{
    long int x; scanf("%d", &x);
    long int y; scanf("%d", &y);
    four(x);
    ten(y);
    return 0;
}
