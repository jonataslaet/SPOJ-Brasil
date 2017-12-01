#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int compare(const void *x, const void *y)
{
	return (*(int*)x - * (int*)y);
}

/*
Para participar da promo��o � preciso enviar um envelope contendo um r�tulo de cada tipo de bala que a SBC
produz. Por exemplo, se a SBC produz 3 tipos de balas, A, B, C, e uma pessoa tem 3 r�tulos de A,
3 de B e 2 de C, ela pode enviar no m�ximo 2 envelopes, j� que falta um r�tulo de C para compor o terceiro
envelope.
*/
int main()
{
	int N, K, qtdRotulos;
	int v[1001] = {0};
	cin >> N >> K;
	qtdRotulos = 0;
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &qtdRotulos);
		v[qtdRotulos - 1]++;
	}
	qsort(v, K, sizeof(int), compare);
	cout << v[0] << endl;
	//mostraVetor(v, K);
	return 0;
}
