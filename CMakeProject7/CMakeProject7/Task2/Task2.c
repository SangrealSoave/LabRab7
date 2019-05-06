#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <malloc.h>

void main()
{
	int *arr;
	int n;
	printf("Input n:\n");
	scanf("%i", &n);
	printf("Input first digit:\n");
	scanf("%i", &arr);
	writeArray(&arr, n);
	readArray(&arr,n);
	sort(&arr,n);
	readArray1( &arr,n);
}