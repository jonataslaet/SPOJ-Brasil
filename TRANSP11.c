#include <stdio.h>

int main(){
    
    int a, b, c, x, y, z, resp;

    scanf("%i %i %i", &a, &b, &c);
    
    scanf("%i %i %i", &x, &y, &z);
    
    resp = ((x / a) * (y / b)) * (z / c); 
    printf("%i", resp);
        
    return 0;    
}

