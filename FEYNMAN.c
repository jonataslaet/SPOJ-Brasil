#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n, i, j, resultado, result[100];
    
    j = 0;
    
    do{
      scanf("%i", &n);
      n = abs(n);
      resultado = 0;
      for (i = 1; i <= n; i++){
          resultado = resultado + i*i;
      }
      result[j] = resultado;
      j++;  
    }while(n != 0);
    for (i = 0; i < j - 1; i++){
        printf("\n%i", result[i]);
    }
    
    return 0;    
}

