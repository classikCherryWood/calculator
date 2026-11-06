#include <stdio.h>

int add(int a, int b)
{
        if (a == INT_MAX || b == INT_MAX)
		return INT_MAX;
	return a+b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
    return a * b;
}
