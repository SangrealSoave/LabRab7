#include <stdio.h>
#include < string.h >
#include <stdlib.h>
void strcpyy(char *dest,int len, char *src)
{
	*src = (int*)
		malloc(30 * sizeof(int));
	printf("Old line: %s\n", dest);
	if (len < strlen(dest))
	{
		strncpy(src, dest, len);
			printf("New line: %s\n", src);
			system("pause");
			src = 0;
				free(src);
	}
	else
	{
		printf("Error\n");
	}
}