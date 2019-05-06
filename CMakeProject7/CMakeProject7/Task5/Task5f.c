#include <stdio.h>
#include < string.h >
#include <stdlib.h>
void strcats(char *dest, int len, const char *first, const char *second)
{
	*dest = (int*)
		malloc(30 * sizeof(int));
	char fs = strlen(first) + strlen(second);
	printf("First line:  %s\n", first);
	printf("Second line: %s\n", second);
	if (len < fs)
	{
		strncpy(dest, strcat(first, second), len);
			printf("New line: %s\n", dest);
			system("pause");
			dest = 0;
			free(dest);
	}
	else
	{
		printf("Error\n");
	}
}