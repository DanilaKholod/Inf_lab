#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
long int four_in_ten(long int a) {

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
    return number;
}
long int ten_in_four(long int b) {
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
    return number;
    }
}

long int sum_4 (long int a, long int b) { //4 error
    long int x = four_in_ten(a);
    long int y = four_in_ten(b);
    long int sum;
    if (x <= 655359 - y && x >= -655359 + y) {
        long int sum = x + y;
        return ten_in_four(sum);
    }
    else {
        sum = 4;
        return sum;
    }
}

long int sub_4 (long int a, long int b) { //5 error

    long int x = four_in_ten(a);
    long int y = four_in_ten(b);
    long int sub;
    if (x <= 655359 + y && x >= -655359 - y) {
        long int sub = x - y;
        return ten_in_four(sub);
    }
    else {
        sub = 5;
        return sub;
    }
}

long int mult_4 (long int a, long int b) { //6 error
    long int x = four_in_ten(a);
    long int y = four_in_ten(b);
    long int mult;
    if (x <= 655359 / y && x >= -655359 / y) {
        long int mult = x * y;
        return ten_in_four(mult);
    }
    else {
        mult = 6;
        return mult;
    }
}

long int pow_4 (long int a, long int b) { //7 error
    long int x = a;
    if (b == 0) {
        a = 1;
    }
    else {
        for (int i = 1; i < b; i++){
            if (four_in_ten(a) <= 655359 / four_in_ten(x) && four_in_ten(a) >= -655359 / four_in_ten(x)) {
                a = mult_4(a, x);
            }
            else {
                a = 7;
                break;
            }
        }
    }
    return a;
}

long int div_4 (long int a, long int b) { //8 error



    long int x = four_in_ten(a);
    long int y = four_in_ten(b);
    long int div;
    if (y != 0) {
        div = x / y;
        return ten_in_four(div);
    }
    else {
        div = 8;
        return div;
    }
}
long int mod_4 (long int a, long int b) { //9 error
    long int x = four_in_ten(a);
    long int y = four_in_ten(b);
    long int mod;
    if (y != 0) {
        mod = x % y;
        return ten_in_four(mod);
    }
    else {
        mod = 9;
        return mod;
    }
}

int main()
{
    long int a, b; scanf("%d%d", &a, &b);
    long int formula1 = 0;
    long int formula2 = 0;
    long int formula3 = 0;

    //formula1
    long int x1 = pow_4(a, 2);
    long int x2 = mult_4(x1, b);
    long int x3 = sub_4(b, a);
    long int x4 = mult_4(b, x3);
    long int x5 = sub_4(x2, x4);
    long int x6 = sum_4(x5, b);
    if(x1 != 7) {
        if (x2 != 6) {
            if (x3 != 5) {
                if (x4 != 6) {
                    if (x5 != 5) {
                        if (x6 != 4) {
                            formula1 = x6;
                            printf("%d\n", formula1);
                        }
                        else {printf("!1\n");}
                    }
                    else {printf("!2\n");}
                }
                else {printf("!3\n");}
            }
            else {printf("!2\n");}
        }
        else {printf("!3\n");}
    }
    else {printf("!4\n");}

    //formula2
    long int y1 = pow_4(a, 3);
    long int y2 = sum_4(y1, b);
    long int y3 = div_4(y2, b);
    if (y1 != 7) {
        if (y2 != 4) {
            if (y3 != 8) {
                formula2 = y3;
                printf("%d\n", formula2);
            }
            else{printf("!5\n");}
        }
        else {printf("!1\n");}
    }
    else {printf("!4\n");}

    //formula3
    long int z1 = pow_4(b, 3);
    long int z2 = sum_4(a, z1);
    long int z3 = mod_4(z2, a);
    if (z1 != 7) {
        if (z2 != 4) {
            if (z3 != 9) {
                formula3 = z3;
                printf("%d\n", formula3);
            }
            else{printf("!6\n");}
        }
        else {printf("!1\n");}
    }
    else {printf("!4\n");}

    //test
    /*printf("%d\n", sum_4(a, b));
    printf("%d\n", sub_4(a, b));
    printf("%d\n", mult_4(a, b));
    printf("%d\n", pow_4(a, 3));
    printf("%d\n", div_4(a, b));
    printf("%d\n", mod_4(a, b));*/
    return 0;
}
