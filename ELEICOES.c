#include <stdio.h>
#include <stdlib.h>

int compare(const void *x, const void *y)
{
	return (*(int*)x - * (int*)y);
}

int main(int argc, char** argv)
{
	long int i, n, v[100001], m, qAnt = 0, qAtual = 0;
	scanf("%ld", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%ld", &v[i]);
	}
	qsort(v, n, sizeof(long int), compare);
	qAnt = 0;
	qAtual = 0;
	m = v[0];
	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			if (v[i] == v[i - 1])
			{
				qAtual++;
				if(qAtual > qAnt)
				{
					qAnt = qAtual;
					m = v[i - 1];
				}
			}
			else
			{
				qAtual = 0;
			}
		}
	}
	printf("%ld\n", m);
	return 0;
}