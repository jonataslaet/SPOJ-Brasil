#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

double Fde(double x, double l, double w)
{
	double y;
	y = x * l * w - l * 2 * x * x - 2 * x * x * w + 4 * x * x * x;
	return y;
}

int main(int argc, char** argv)
{
	double ldouble, wdouble, a, b, c, x1, x2, delta, FdeZero, FdeX1, FdeX2;
	int l, w;

	for (;;)
	{
		scanf("%d %d", &l, &w);
		ldouble = (double)l;
		wdouble = (double)w;
		if (l == 0 && w == 0) break;
		else
		{
			a = 12;
			b = -(4 * ldouble) - (4 * wdouble);
			c = ldouble * wdouble;
			delta = (b * b) - 4 * a * c;
			//b=12; a=12; c=3; -> delta=0;
			//

			x1 = (-b + (sqrt(delta))) / (2 * a);
			x2 = (-b - (sqrt(delta))) / (2 * a);
			FdeZero = Fde(0, l, w);
			FdeX1 = Fde(x1, l, w);
			FdeX2 = Fde(x2, l, w);
			printf("%.4lf %.4lf\n", x2, FdeX2);
		}
	}


	return 0;
}