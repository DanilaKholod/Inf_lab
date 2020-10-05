#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/*Homework 4 v1*/
int main(){
    int k; scanf("%d", &k); /*input*/
    int max_sum = -1;
    int N;
    int check = 1;
    char reason;
    for (int n = 1; n <= INT_MAX; n++) {
        int sum = 0;
        for (int i = 2; i <= 2*k; i+=2) {
            int deg = 1;
            for (int j = 1;j <= n; j++){ /*exponentiation*/
                if (deg <= LONG_MAX/i) {deg *= i;} /*check overflow in multiplication*/
                else {reason = '*'; check = 0; break;} /*if overflow do break*/
            }
            if (check == 0) {reason = '*'; break;}
            if (sum <= LONG_MAX - deg) {sum += deg;} /*check overflow in sum*/
            else {reason = '+'; check = 0; break;} /*if overflow do break*/
        }
        if (check == 0) { /*the completion of the cycle after the overflow*/
            N = n - 1;
            break;
        }
        if (sum > max_sum) {max_sum = sum;} /*checking the maximum sum*/
    }
    printf("%d\n", max_sum);
    printf("%d\n", N);
    printf("%c\n", reason);
    return 0;
}
