#include < stdio.h >  
#include < math.h > 
#include <stdlib.h>
#include <malloc.h>
void incrementHeapVariable(void);
void main()
{
	incrementHeapVariable();
	system("pause");
}
void incrementHeapVariable()
{

	int n = 6;
	for (int i = 0; i < n; i++)
	{
		int *f = (int*)
			malloc(sizeof(int));
		*f = pow(6, i) + i - 6;
		printf("x=%i  f(x)=%i\n", *f, i);
		free(f);
	}
	system("pause");
}