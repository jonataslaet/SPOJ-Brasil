#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int at, ano, anospassados, i, anosrest;
    
    scanf("%i", &at);
    at = abs(at);
    
    anospassados = at - 1986;
    
    if ((at - 1986) % 76 == 0){
       ano = at + 76;       
    }
    else { 
         while (((at - 1986) % 76 < 0) || ((at - 1986) % 76 > 0)){
               at++;      
         }
         ano = at;  
    }
    
    printf("%i", ano);
    
    return 0;    
}
