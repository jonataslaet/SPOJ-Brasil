#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Ponto
{
	long long int x;
	long long int y;
} ponto;

int main(int argc, char** argv)
{
	ponto p[1001];
	double xa, xb, ya, yb, dxy, dxyMenor, aux;
	int n, i, k;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%lld %lld", &p[i].x, &p[i].y);
		//dab = raizDe([xb-xa ao quadrado]+[yb-ya ao quadrado]);
		//
		if (i == 1 && i != 0)
		{
			xa = (double) (p[i - 1].x);
			xb = (double)(p[i].x);
			ya = (double)(p[i - 1].y);
			yb = (double) (p[i].y);
			dxyMenor = hypot((xb - xa), (yb - ya));
		}
		else
		{
			for (k = i - 1; k >= 0; k--)
			{
				xa = (double) (p[k].x);
				xb = (double)(p[i].x);
				ya = (double)(p[k].y);
				yb = (double) (p[i].y);
				dxy = hypot((xb - xa), (yb - ya));
				//dxy = sqrt((double)(((p[i].x - p[k].x) * (p[i].x - p[k].x)) + ((p[i].y - p[k].y) * (p[i].y - p[k].y))));
				if (dxy < dxyMenor)
				{
					aux = dxy;
					dxy = dxyMenor;
					dxyMenor = aux;
				}

			}
		}
	}
	printf("%.3lf", dxyMenor);

	return 0;
}
