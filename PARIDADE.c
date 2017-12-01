#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	int i, ind, y, b, aux, resto, q, tam;
	char infobin[51], numbin[51];
	for (;;)
	{
		scanf("%d", &aux);
		if (aux == 0) break;
		else
		{
			ind = 0;
			y = 0, b = 0;
			q = 0;
			//Transforma aux pra binário
			while (aux >= 2)
			{
				resto = aux % 2;
				if (resto == 0) numbin[ind++] = '0';
				else if (resto == 1) numbin[ind++] = '1';
				aux = aux / 2;
			}
			if (aux == 1) numbin[ind++] = '1';
			else if (aux == 0) numbin[ind++] = '0';
			numbin[ind] = '\0';
			for (b = ind - 1; b >= 0; b--) infobin[y++] = numbin[b];
			infobin[ind] = '\0';
			//printf("%s\n", infobin);
			tam = strlen(numbin);
			for (i = 0; i < tam; i++)
			{
				if (numbin[i] == '1') q++;
			}
			//The parity of 1 is 1 (mod 2).The parity of 10101 is 3 (mod 2).
			printf("The parity of %s is %d (mod 2).\n", infobin, q);
		}
	}





	return 0;
}