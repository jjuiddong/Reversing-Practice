
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	__int64 a = 10;
	__int64 b = 1000;
	__int64 c = a + b;


	printf("Enter number.. \n");
	int n = 0;
	scanf("%d", &n);

	if (n == 0)
	{
		goto bye;
	}
	else
	{
		return 0;
	}

bye:
	printf("byebyte\n");
	return 1;
}
