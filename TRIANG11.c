#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int verificaTri(int a, int b, int c)
{
	if (((a + b) <= c) || ((b + c) <= a) || ((a + c) <= b))
	{
		return 0;
	}
	return 1;
}

void reajuste(int *a, int *b, int *c, int *l1, int *l2, int *l3)
{
	if (*l1 > *l2 && *l1 > *l3)
	{
		*a = *l1;
		*b = *l2;
		*c = *l3;
	}
	else if (*l2 > *l1 && *l2 > *l3)
	{
		*a = *l2;
		*b = *l1;
		*c = *l3;
	}
	else
	{
		*a = *l3;
		*b = *l1;
		*c = *l2;
	}
}

int main()
{
	int a, b, c, l1, l2, l3;

	scanf("%d %d %d", &l1, &l2, &l3);
	if (verificaTri(l1, l2, l3) == 1)
	{
		reajuste(&a, &b, &c, &l1, &l2, &l3);
		if ((a * a) == ((b * b) + (c * c))) printf("r\n");
		if ((a * a) > ((b * b) + (c * c))) printf("o\n");
		if ((a * a) < ((b * b) + (c * c))) printf("a\n");
	}
	else
	{
		printf("n\n");
	}

	return 0;
}