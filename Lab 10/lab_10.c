#include <stdio.h>
#include <stdlib.h>
int f(int n, int m) {
    if (n == 0) {
        return 1;
    }
    else if (n < m) {
        return -1;
    }
    else {
        return 2 * f(n - 1, m);
    }
}
int main()
{
    int n, m; scanf("%d%d", &n, &m);
    printf("%d\n", f(n, m));
    return 0;
}
