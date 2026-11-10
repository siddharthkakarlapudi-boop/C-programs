#include<stdio.h>

void update (int *p)
{
	*p = *p + 10;
}

int main()
{
	int x = 15;
	update(&x);
	printf("%d", x);
	return 0;
}
