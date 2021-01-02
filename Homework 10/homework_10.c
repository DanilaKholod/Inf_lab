#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int* AR1 = NULL;
int* AR2 = NULL;
int* AR3 = NULL;
int K = 0;

int F(int i, int j)
{
	if (i == 1)
	{
		K++;
		AR1 = (int*)realloc(AR1, K * sizeof(int));
		AR2 = (int*)realloc(AR2, K * sizeof(int));
		AR3 = (int*)realloc(AR3, K * sizeof(int));
		AR1[K - 1] = j;
		AR2[K - 1] = i;
		AR3[K - 1] = 1;
		return 1;
	}
	if (i == 2)
	{
		K++;
		AR1 = (int*)realloc(AR1, K * sizeof(int));
		AR2 = (int*)realloc(AR2, K * sizeof(int));
		AR3 = (int*)realloc(AR3, K * sizeof(int));
		AR1[K - 1] = j;
		AR2[K - 1] = i;
		AR3[K - 1] = 3;
		return 1;
	}
	int A = F(i - 1, j + 1);
	int B = F(i - 2, j + 1);
	if (A == -1 || A > INT_MAX - B)
	{
		K++;
		AR1 = (int*)realloc(AR1, K * sizeof(int));
		AR2 = (int*)realloc(AR2, K * sizeof(int));
		AR3 = (int*)realloc(AR3, K * sizeof(int));
		AR1[K - 1] = j;
		AR2[K - 1] = i;
		AR3[K - 1] = -1;
		return -1;
	}
	K++;
	AR1 = (int*)realloc(AR1, K * sizeof(int));
	AR2 = (int*)realloc(AR2, K * sizeof(int));
	AR3 = (int*)realloc(AR3, K * sizeof(int));
	AR1[K - 1] = j;
	AR2[K - 1] = i;
	AR3[K - 1] = A + B;
	return A + B;
}

int main()
{
	int x, y;
	scanf("%d", &x);
	int c;
	AR1 = (int*)realloc(AR1, sizeof(int));
	AR2 = (int*)realloc(AR2, sizeof(int));
	AR3 = (int*)realloc(AR3, sizeof(int));
	AR1[0] = AR2[0] = AR3[0] = 0;
	y = F(x, 0);
	if (y != -1)
	{
		printf("%d\n", y);
	}
	if (y == -1)
	{
		printf("!\n");
	}
	for (int i = 0; i < K - 1; i++)
	{
		for (int j = i; j < K - 1; j++)
		{
			if (AR1[j] < AR1[j + 1])
			{
				c = AR1[j]; AR1[j] = AR1[j + 1]; AR1[j + 1] = c;
				c = AR2[j]; AR2[j] = AR2[j + 1]; AR2[j + 1] = c;
				c = AR3[j]; AR3[j] = AR3[j + 1]; AR3[j + 1] = c;
			}
		}
	}
	for (int i = 0; i < K - 1; i++)
	{
		for (int j = i; j < K - 1; j++)
		{
			if (AR2[j] < AR2[j + 1] && AR1[j] == AR1[j + 1])
			{
				c = AR1[j]; AR1[j] = AR1[j + 1]; AR1[j + 1] = c;
				c = AR2[j]; AR2[j] = AR2[j + 1]; AR2[j + 1] = c;
				c = AR3[j]; AR3[j] = AR3[j + 1]; AR3[j + 1] = c;
			}
		}
	}
	for (int i = K - 1; i >= 0 ; i--)
	{
		if(AR3[i] != -1)
		{
			printf("%d\tF(%d)\t%d\n", AR1[i], AR2[i], AR3[i]);
		}
		if(AR3[i] == -1)
		{
			printf("%d\tF(%d)\t!\n", AR1[i], AR2[i]);
		}
	}
	free(AR1);
	free(AR2);
	free(AR3);
	return 0;
}
