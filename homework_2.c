#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*number 1*/
    int a, b, c; scanf("%d%d%d", &a, &b, &c);
    int x, y; scanf("%d%d", &x, &y);
    if ((a > b) && (a > c)) {printf("%d\n", a);}
    else if ((b > a) && (b > c)) {printf("%d\n", b);}
    else if ((c > b) && (c > a)) {printf("%d\n", c);}
    else if ((a == b) && (a > c)) {printf("%d two\n", a);}
    else if ((a == c) && (a > b)) {printf("%d two\n", a);}
    else if ((b == c) && (b > a)) {printf("%d two\n", b);}
    else if ((a == b) && (b == c)) {printf("equal\n");}

    /*number 2*/
    int R = 250;
    if ((x > -R && x < R) && (x*x + y*y > R*R) && (y < 250) && (y > 0)) {
        printf("inside\n");
    }
    else if (((x*x + y*y < R*R) && (y - x + R < 0)) || ((x*x + y*y < R*R) && (y + x + R < 0)) ) {
        printf("inside\n");
    }
    else {
        printf("outside\n");
    }
    return 0;
}
