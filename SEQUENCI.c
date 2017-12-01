#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int subsetSum (int arr[], int size, int target)
{
	int i, j ;
	int **table ;
	table = (int **) malloc (sizeof(int*) * (size + 1)) ;
	for ( i = 0 ; i <= size ; i ++ )
	{
		table[i] = (int *) malloc (sizeof(int) * (target + 1)) ;
		table[i][0] = 1 ;
	}
	for ( j = 1 ; j <= target ; j ++ )
		table[0][j] = 0 ;
	for ( i = 1 ; i <= size ; i ++ )
	{
		for ( j = 1 ; j <= target ; j ++ )
			table[i][j] = table[i - 1][j] || (arr[i - 1] <= j && table[i - 1][j - arr[i - 1]] ) ;
	}
	if (table[size][target] == 1) return 1; //printf ( "\ntarget sum found\n" ) ;
	else return 0;//printf ( "\nTarget sum do not found!\n" ) ;
	free (table) ;
}

int main()
{
	int num, vetor[101], i, caso = 1;
	int satisfaz = 1;

	while(scanf("%d", &num) == 1)
	{
		satisfaz = 1;

		for (i = 0; i < num; i++)
		{
			scanf("%d", &vetor[i]);
			if((subsetSum (vetor, i, vetor[i]) == 1)||(i > 0 && vetor[i] <= vetor[i-1])) satisfaz = 0;
		}
		printf("\nCase #%d:", caso);
		for (i = 0; i < num; i++) printf(" %d", vetor[i]);
		if(satisfaz == 1) printf("\nThis is an A-sequence.\n");
		else printf("\nThis is not an A-sequence.\n");
		caso++;
	}

	return 0;
}