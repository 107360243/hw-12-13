#include<stdio.h>
#include<stdlib.h>
#define size 7
void binarysearch(const int a[], int i, int left, int right, int mid);
int main()
{
	int left = 0;
	int right = 6;
	int mid = 3;
	int i, a[size] = { 30,40,50,60,70,80,90 };
	printf("The array of integer¡G ");
	for (i = 0; i < size; i++)
	{
		printf("%3d", a[i]);
	}
	for (;;)
	{
		printf("\n½Ð¿é¤J±ý·j´M¤§­È¡G");
		scanf_s("%d", &i);
		binarysearch(a, i, right, left, mid);
	}
	system("pause");
}
void binarysearch(const int a[], int i, int right, int left, int mid)
{
	int j;
	int status = 0;
	for (j = 0; j < size; j++)
	{
		if (a[j] == i)
		{
			status = 1;
		}
	}
	if (status == 1)
	{
		if (a[left] == i)
		{
			printf("%d is in the position of %d\n", a[left], left);
		}
		else if (a[right] == i)
		{
			printf("%d is in the position of %d\n", a[right], right);
		}
		else if (a[mid] == i)
		{
			printf("%d is in the position of %d\n", a[mid], mid);

		}
		else
		{
			mid = (left + right) / 2;
			if (i < a[mid])
			{
				right = mid;
			}
			else if (i > a[mid])
			{
				left = mid;
			}
			binarysearch(a, i, right, left, mid);
		}
	}
	else
	{
		printf("%d does not in this array\n", i);
	}
}