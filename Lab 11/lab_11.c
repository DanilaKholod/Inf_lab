#include <stdio.h>
#include <stdlib.h>

int array[16];
int random(int min, int max) {
  if (min > 0) return min + rand() % (max - min);
  else return min + rand() % (abs(min) + max);
}

void zero(int m[], int k) {
    for(int i = 0; i < k; i++) {
        m[i] = 0;
    }
}

void input(int m[], int k) {
    for (int i = 0; i < k; i++) {
        scanf("%d", &m[i]);
    }
}
void output(int m[], int k) {
    for (int i = 0; i < k; i++) {
        printf("%d ", m[i]);
    }
    printf("\n");
}
void random_array(int m[], int k, int a, int b) {
    for (int i = 0; i < k; i++) {
        m[i] = random(a, b);
    }
}
void sum(int m[], int k) {
    int s = 0;
    for(int i = 0; i < k; i++) {
        s += m[i];
    }
    printf("%d\n", s);
}
void number(int m[], int k){
	int s[16]={0};
	int i;
	for(i = 0;i < k; i++)
		s[*(m+i)-15]++;
	for(i = 0;i < 16; i++){
		if(s[i]) array[i]++;
	}
}

int main()
{
    int a[5];
    int b[7];
    int c[8];

    int first, end;
    scanf("%d%d", &first, &end);

    random_array(a, 5, first, end);
    random_array(b, 7, first, end);
    random_array(c, 8, first, end);

    number(a, 5);
    number(b, 7);
    number(c, 8);

    output(a, 5);
    output(b, 7);
    output(c, 8);

    output(array, 16);

    return 0;
}
