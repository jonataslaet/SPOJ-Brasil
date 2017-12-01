#include <stdio.h>

int main(){
    
    int j, k, m, n, x, y, i, result[10000];
    
    j = 0;
    do {
       scanf("%i", &k);
       if (k != 0){
          scanf("\n%i %i", &n, &m);
    
          for (i = 0; i < k; i++){
              scanf("\n%i %i", &x, &y);
              if (x == n || y == m){
                 result[i+j] = 5;      
              }        
              else if (x > n && y > m){
                   result[i+j] = 2;
              }
              else if (x < n && y > m){
                   result[i+j] = 1;     
              }
              else if (x < n && y < m){
                   result[i+j] = 4;     
              }
              else if (x > n && y < m){
                   result[i+j] = 3;     
              }
          }
        }
        j = j + k;           
    }while(k != 0);
    
    for (i = 0; i < j; i++){
        if (result[i] == 1){
           printf("\nNO");           
        }
        else if (result[i] == 2){
             printf("\nNE");
        }
        else if (result[i] == 3){
             printf("\nSE");
        }
        else if (result[i] == 4){
             printf("\nSO");
        }
        else if (result[i] == 5){
             printf("\ndivisa");     
        }    
    }
    
    return 0;    
}

