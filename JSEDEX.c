#include <stdio.h>

int main(){
    
    int n, a, l, p;
    
    scanf("%i", &n);
    
    scanf("%i %i %i", &a, &l, &p);
    
    if (n <= a && n <= l && n <= p){
       printf("S");   
    }
    else{
       printf("N");        
    }
    
    return 0;    
}
