#include <stdio.h>
#include <string.h>

int main(){
    
    char n[102], result[102];
    int d, qtdzero, t, tam, j, i, algint;
    
    for (j = 0;;j++){
        scanf("%i", &d); 
        if (d != 0){
           scanf("%s", &n);
           tam = strlen(n);
           t = 0;
           qtdzero = 0;
           for (i = 0; n[i] != '\0'; i++){
               algint = n[i] - '0';
               if (algint == 0){
                  qtdzero++;              
               }
               if (algint != d){
                  result[t] = n[i];
                  t++;           
               }
           }
           result[t] = '\0';
           tam = strlen(result);
           
           if (qtdzero == tam || t == 0){
              printf("0\n");              
           }
           else {
                printf("%s\n", result);              
           }
        }
        else{
             break;     
        }
    }
    
    return 0;   
}





