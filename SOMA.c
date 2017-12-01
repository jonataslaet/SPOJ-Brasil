#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n, i;
    int soma = 0;
    int x;
    
    
    scanf("%i", &n);
    n = abs(n);  
       for (i = 0; i < n; i++){
           scanf("%i",  &x);
           soma = soma + x; 
       }     
    printf("%i", soma);
    
    return 0;    
}
