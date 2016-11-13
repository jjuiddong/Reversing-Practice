
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
	int x;
	printf("Enter X:\n");
	scanf("%d", &x);

	if (x == 1)
	{
		printf("you entered %d...\n", x);
	}
	else
	{
		printf("What you entered? Huh? \n");
	}

	return 0;
}