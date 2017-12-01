#include <stdio.h>

int main(){
    
    int z, x1, y1, x2, y2, qtdmt, i, n, x, y;
    
    for (z = 1;;z++){
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        if (x1 != 0 || y1 != 0 || x2 != 0 || y2 != 0){
           scanf("%d", &n);
           qtdmt = 0;
           for (i = 0; i < n; i++){
               scanf("%d %d", &x, &y);    
               if (x >= x1 && x <= x2 && y <= y1 && y >= y2){
                  qtdmt = qtdmt + 1;        
               }
           }
           printf("Teste %d\n", z);
           printf("%d\n", qtdmt);
           printf("\n");
        }
        else {
             break;     
        }
    }
    
    return 0;   
}