#include <stdio.h>
#include <math.h>

int main(){
    
    int l, a, p, r, x, y;
    
    scanf("%d %d %d %d", &l, &a, &p, &r);
    x = sqrt((l * l) + (p * p));
    y = sqrt((x * x) + (a * a));
    if (y > 2 * r){
       printf("N");      
    }
    else {
         printf("S");     
    }
        
    return 0;   
}