
#include <iostream>

double f1(double a, double b)
{
	return a / 3.14f + b*4.1f;
}

float f2(float a, float b)
{
	return a / 3.14f + b*4.1f;
}


int main()
{
	double d = f1(1.2f, 3.4f);
	//float d = f(1.2f, 3.4f);
	printf("%f \n", d);
}
