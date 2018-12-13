#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 13
int main()
{
	int b = 0, c = 0, total = 0, a[size] = { 0 };
	srand(time(NULL));
	for (int roll = 1; roll <= 36000; roll++)
	{
		b = rand() % 6 + 1;
		c = rand() % 6 + 1;
		total = b + c;
		++a[total];
	}
	printf("  Total       Frequency\n");
	for (total = 2; total < size; total++)
	{
		printf("%5d%15d\n", total, a[total]);
	}
	system("pause");
}
