#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    float resto;
    signed long int n;
    int i, cont, t;
        
    scanf("%li", &n);
    t = abs(n);
    
    cont = 0;
    for (i = 1; i <= sqrt(t); i++){
        resto = t % i;
        if (resto == 0){
           cont++;      
        }    
    }
    if (cont >= 2){
       printf("nao");         
    }
    else if (n == 0 || n == 1 || n == -1){
            printf("nao");
    }
        else {
         printf("sim");
    }     
    
    return 0;  
     
}