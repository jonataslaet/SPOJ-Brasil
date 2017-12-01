#include <stdio.h>

int main(){
    
    int n, m, i, j, aux;
    int val[10000];
    
    scanf("%i %i", &n, &m);
    
    for (i = 0; i < n; i++){
        scanf("%i", &val[i]);    
    }
    for (i = 0; i < n; i++){
        for (j = i+1; j < n; j++){
            if (val[i] > val[j]){
               aux = val[j];
               val[j] = val[i]; 
               val[i] = aux;    
            }    
        }     
    }
    aux = n-1;
    for (i = 0; i < m; i++){
        printf("%i\n", val[aux]);
        aux--;    
    }
    
    return 0;    
}
