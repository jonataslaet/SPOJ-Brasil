#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    
    int n, p, j, cont, i;
    float result;
    char nome[51];

    for (j = 0;;j++){
       scanf("%i %i", &n, &p);
       n = abs(n);
       p = abs(p);
       if (n != 0 && p != 0){
          result = (float)n / (float)p; 
          result = ceil(result);
          if (result <= 20){
             cont = result - 5;
             }
          else {
             result = 20;
             cont = result - 5;
          }
          for (i = 0; i <= cont; i++){
              nome[i] = 'o';    
          }
          nome[i] = '\0';
          if (result > 6){
             printf("P%sdle\n", nome);
          }
          else {
               printf("Poodle\n");
          }
       }
       else{
          break;
       }
     }
    
     return 0;   
}



