#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <malloc.h>
void readArray(int *arr, int n)
{
	*arr = (int*)
		malloc(n * sizeof(int));

	for (int i = 1; i < n + 1; i++)
	{
		printf("%i ", *(arr + i));
	}
	printf("\n");
}
void readArray1(int *arr, int n)
{
	*arr = (int*)
		malloc(n * sizeof(int));
	for (int i = 1; i < n + 1; i++)
	{
		printf("%i ", *(arr + i));
	}
	printf("\n");

	arr = 0;
	free(arr);
	system("pause");
}
void writeArray(int *arr, int n)
{
	int i = 0;
	*(arr + i) = *arr;
	for (i = 1; i < n + 1; i++)
	{
		*(arr + i) = *(arr);
		if (i == n)
		{
			break;
		}
		printf("Input %i digit of array:\n", i + 1);
		scanf("%i", arr);
	}
}
void sort(int *arr, int n)
{
	int i;
	int k;
	int j;
	for (i = 0; i < n + 1; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (*(arr + j) > *(arr + j + 1))
			{
				k = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = k;
			}
		}
	}
}