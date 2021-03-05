#include <stdio.h>
#include <stdlib.h>

/*int random(int min, int max) {
  if (min > 0) return min + rand() % (max - min);
  else return min + rand() % (abs(min) + max);
}*/

int f1(int **a, int n, int k) {
    int *q;
    q = (int *) malloc((n - 1) * sizeof(int));
    for(int i = 0; i < k; i++) {
        *(q + i) = (*a)[i];
    }
    for(int i = k; i < n - 1; i++) {
        *(q + i) = (*a)[i + 1];
    }
    *a = q;
}

int f2(int **a, int n, int i) {
    i--;
    int t = (*a)[0];
    (*a)[0] = (*a)[i];
    (*a)[i] = t;
}

int main()
{
    int *m;
    int n, k, j;

    //input
    scanf("%d", &n);
    m = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &m[i]);
    }
    scanf("%d", &k);
    scanf("%d", &j);

    //output before function
    for (int i = 0; i < n; i++) {
        printf("%3d", i + 1);
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%3d", *(m + i));
    }
    printf("\n");

    //function
    f1(&m, n, k - 1);
    f2(&m, n - 1, j);
    printf("\n");

    //output after function
    for (int i = 0; i < n - 1; i++) {
        printf("%3d", i + 1);
    }
    printf("\n");
    for (int i = 0; i < n - 1; i++) {
        printf("%3d", m[i]);
    }
    printf("\n");
    return 0;
}
