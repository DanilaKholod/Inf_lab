#define _CRT_NO_WARNINGS
#include <stdio.h>
#ifdef _VISUAL
#include <conio.h>
#endif

const int FROM = 180;
const int TO = 210;
const int ROW = 4;

int main(void)
{
	int max[2] = { 0, -1 };
	int i = FROM;
	for (i; i <= TO; i++)
	{
		printf("%-5d", i);
		int c = 0;
		int sum = 0;
		int j = 2;
		for (j; j < i; j++)
		{
			if (i % j == 0)
			{
				if (c == 0)
				{
					printf("%3d", j);
				}
				else if (c % ROW == 0)
				{
					printf(",\n     %3d", j);
				}
				else
				{
					printf(",%3d", j);
				}
				c++;
				sum += j;
			}
		}
		char str[6] = "%__d\n";
		char* p = str;
		int size;
		if (c == 0)
		{
			size = 4 * (4 - c % ROW) + 5;
		}
		else
		{
			size = (c % ROW == 0) ? 6 : 4 * (4 - c % ROW) + 6;
		}
		str[1] = (size > 9) ? (size / 10 + 48) : (p++, '%');
		str[2] = size % 10 + 48;
		printf(p, sum);

		if (sum >= max[1])
		{
			max[1] = sum;
			max[0] = i;
		}
	}
	printf("\n%d\n", max[0]);
	return 0;
}
