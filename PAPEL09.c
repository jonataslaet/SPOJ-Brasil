#include <stdio.h>

int main(){
    
    int c, p, f;
    scanf("%i %i %i", &c, &p, &f);    
    
    if (c*f <= p){
       printf("S");     
    }
    else{
         printf("N");     
    }
    
    return 0;   
}