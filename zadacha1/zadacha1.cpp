#include <stdio.h>
#include <stdlib.h>

int main()
{
	int k = 0;
	char a;
	char* b;
	
	b = (char*)malloc(k * sizeof(char));

	while ((a = getchar()) != '\n') {
		k++;
		b = (char*)realloc(b, k * sizeof(char));
		b[k-1] = a;
	}
	while (k > 0)
	{
		printf("%c", b[k-1]);
		k--;
	}
	free(b);
}
