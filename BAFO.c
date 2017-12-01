#include <stdlib.h>
#include <stdio.h>

int main(){
    int juiz[1000], a, b, i, j, r, somaA, somaB;
    j = 0;
    do{
       scanf("%i", &r);
       if (r != 0){ 
          somaA = 0;
          somaB = 0;  
          for (i = 0; i < r; i++){
               scanf("%i %i", &a, &b);
               somaA = somaA + a;
               somaB = somaB + b; 
          } 
          if (somaA > somaB){
             juiz[j] = 1;          
          }
          if (somaB > somaA){
             juiz[j] = 2;          
          }          
       }
       
       j++;
    }while(r != 0);
    
    for (i = 0; i < j; i++){
        if (juiz[i] == 1){
           printf("\nTeste %i\nAldo\n", i+1);            
        } 
        if (juiz[i] == 2){
           printf("\nTeste %i\nBeto\n", i+1);            
        }    
    }
    
    return 0;   
}
