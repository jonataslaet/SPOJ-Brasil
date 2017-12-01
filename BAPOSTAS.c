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
	int n, i, v[10001], teste = 1, max, a, b, xi;
	for(;;)
	{
		scanf("%d", &n);
		if (n == 0) break;
		else
		{
			for (i = 0; i < n; i++)
			{
				scanf("%d", &xi);
				v[i] = xi;
			}
			kadane(v, n, &a, &b, &max); 
			if (max > 0) printf("\nThe maximum winning streak is %d.\n", max);
			else printf("\nLosing streak.\n");
			teste++;
		}
	}


	return 0;
}