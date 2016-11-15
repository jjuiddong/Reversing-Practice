
#include <iostream>

class object
{
public:
	int color;
	object()
	{
	};

	object(int color)
	{
		this->color = color;
	}

	virtual void dump()
	{
		printf("color = %d\n", color);
	}
	virtual void dump2()
	{
		printf("color = %d\n", color);
	}
};

class box : public object
{
private:
	int width, height, depth;
public:
	box(int color, int width, int height, int depth)
	{
		this->color = color;
		this->width = width;
		this->height = height;
		this->depth = depth;
	}

	virtual void dump()
	{
		printf("this is box. color=%d, width=%d, height=%d, depth=%d\n",
			color, width, height, depth);
	}
	virtual void dump2()
	{
		printf("this is box. color=%d, width=%d, height=%d, depth=%d\n",
			color, width, height, depth);
	}
};

class sphere : public object
{
private:
	int radius;
public:
	sphere(int color, int radius)
	{
		this->color = color;
		this->radius = radius;
	}

	virtual void dump()
	{
		printf("this is sphere. color=%d, radius=%d \n", color, radius);
	}
	virtual void dump2()
	{
		printf("this is sphere. color=%d, radius=%d \n", color, radius);
	}
};

int main()
{
	object  *o1 = new box(1, 10, 20, 30);
	object  *o2 = new sphere(2, 40);

	o1->dump();
	o2->dump();

	o1->dump2();
	o2->dump2();

	delete o1;
	delete o2;
	return 0;
}

