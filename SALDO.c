#include <stdio.h>

void kadane(int v[], int n, int *x, int *y, int *max_total)
{
	int max_atual;
	int xtemp;
	int i;
	max_atual = 0;
	*max_total = -1;
	xtemp = 0;
	for(i=0;i<n;i++)
	{
		max_atual = max_atual + v[i];
		if(max_atual < 0)
		{
			max_atual = 0;
			xtemp = i + 1;
		}
		if(max_atual >= (*max_total))
		{
			(*max_total) = max_atual;
			(*x) = xtemp;
			(*y) = i;
		}
	}
}

int main()
{
	int p, i, v[10001], teste = 1, max, a, b, x, y;
	for(;;)
	{
		scanf("%d", &p);
		if (p == 0) break;
		else
		{
			for (i = 0; i < p; i++)
			{
				scanf("%d %d", &x, &y);
				v[i] = x - y;
			}
			kadane(v, p, &a, &b, &max);
			// printf("\nTeste %i\nAldo\n", i+1); 
			if (max > 0) printf("\nTeste %d\n%d %d\n", teste, a+1, b+1);
			else printf("\nTeste %d\nnenhum\n", teste);
			//printf("Teste %d:\n", teste);
			//if (max <= 0) printf("nenhum\n\n");
			//else printf("%d %d\n\n", a + 1, b + 1);
			teste++;
		}
	}


	return 0;
}
