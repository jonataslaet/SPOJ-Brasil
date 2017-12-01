#include <stdio.h>
#include <stdlib.h>

int main(){
    int k, n, j, p, i;
    for (k = 0;; k++){
        scanf("%i", &n);
        int votos[n][n], pop[n], p;
        
        if (n != 0){
           p = 0;
           for (i = 0; i < n; i++){
               pop[i] = 0;    
           }
           for (i = 0; i < n; i++){
               for (j = 0; j < n; j++){
                   scanf("%i", &votos[i][j]);
                   if (votos[i][j] == 1){
                      pop[j]++;                
                   }
               }
           }
           for (i = 0; i < n; i++){
               if (pop[i] > p){
                  p = pop[i];            
               }    
           }
           printf("%i\n", p);   
        }
        else{
             break;     
        }
    }
    
    return 0;   
}

