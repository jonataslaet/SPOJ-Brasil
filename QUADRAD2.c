#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n;
    unsigned long int x;
    
    scanf("%i", &n);
    n = abs(n);
    
    x = n * n;
    
    printf("%li", x);
    
    return 0;    
}
