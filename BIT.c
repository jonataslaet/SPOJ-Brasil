#include <stdio.h>

int main(){
    
    int v[10000], t, i, j, k, qtd50, qtd10, qtd5, qtd1;
    
    i = 0;
     
    do{        
       scanf("%i\n", &t);
       v[i] = t;
       i++;
    }while(t != 0);
    
    for (j = 0; j < i - 1; j++){
        printf("\nTeste %d\n",j+1);
        for (k = 0; k < 4; k++){
            qtd50 = v[j] / 50;
            qtd10 = (v[j] % 50) / 10;
            qtd5 = ((v[j] % 50) % 10) / 5;
            qtd1 = ((v[j] % 50) % 10) % 5;; 
        }
        printf("%i %i %i %i", qtd50, qtd10, qtd5, qtd1);            
    }
    
    return 0;   
}
