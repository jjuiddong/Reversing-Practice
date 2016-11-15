
#include <stdio.h>
#include <stdlib.h>

int comp(const void *_a, const void *_b)
{
	const int *a = (const int *)_a;
	const int *b = (const int *)_b;

	if (*a == *b)
		return 0;
	else
		if (*a == *b)
			return -1;
		else
			return 1;
}


int main()
{
	int numbers[10] = { 1892,2,34,55, 566,22,3,111,22,01 };
	int i = 0;
	
	qsort(numbers, 10, sizeof(int), comp);
	
	for (i = 0; i < 10; ++i)
		printf("number = %d \n", numbers[i]);

	return 0;
}