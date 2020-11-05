#include <stdio.h>
#include <stdlib.h>
int random(int min, int max) {
  if (min > 0) return min + rand() % (max - min);
  else return min + rand() % (abs(min) + max);
}

int main()
{
    //int a, b; scanf("%d%d", &a, &b);
    int massive[5];
    int count = 0, sum = 0;
    int x; scanf("%d", &x);
    int *p = &massive[0];
    /*for (int i = 0; i < 40; i++) {
        massive[i] = random(a, b);
    }
    for (int i = 0; i < 40; i++) {
        printf("massive[%d] = %d\n", i, massive[i]);
    }*/
    for (int i = 0; i < 40; i++) {
        scanf("%d", &massive[i]);
    }
    for (int i = 0; i < 40; i++) {
        if (massive[i] < x) {
            sum += massive[i];
            count++;
        }
    }
    for (int i = 0; i < 40; i++) {
        scanf("%d", &*(p + i));
    }
    for (int i = 0; i < 40; i++) {
        if (*(p + i) < x) {
            sum += *(p + i);
            count++;
        }
    }
    printf("%.4f\n", (double) sum / count);
    printf("%d\n", count);
    return 0;
}
