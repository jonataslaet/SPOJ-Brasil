#include <stdio.h>
#include <stdlib.h>

    int f91(int num){
        int result;
        if (num <= 100){
           return f91(f91(num+11));        
        }
        return num - 10;    
    }

int main () {
    
    int numero = 10, j, i;
    
    while(numero != 0){
       scanf("%d", &numero);
       if (numero != 0){
          j = f91(numero);
          printf("f91(%d) = %d\n", numero, j);
       }
    }
    
    return 0;
    
}


