#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char texto[31], num[31];
    int tam, i;
    while(scanf("%s", &texto)!=EOF){
       tam = strlen(texto);
       for (i = 0; i < tam; i++){
           if (texto[i] == 'A' || texto[i] == 'B' || texto[i] == 'C'){
              num[i] = '2';          
           }
           else if (texto[i] == 'D' || texto[i] == 'E' || texto[i] == 'F'){
                   num[i] = '3';     
           }
           else if (texto[i] == 'G' || texto[i] == 'H' || texto[i] == 'I'){
                   num[i] = '4';     
           }
           else if (texto[i] == 'J' || texto[i] == 'K' || texto[i] == 'L'){
                   num[i] = '5';     
           }
           else if (texto[i] == 'M' || texto[i] == 'N' || texto[i] == 'O'){
                   num[i] = '6';     
           }
           else if (texto[i] == 'P' || texto[i] == 'Q' || texto[i] == 'R' || texto[i] == 'S'){
                   num[i] = '7';     
           }
           else if (texto[i] == 'T' || texto[i] == 'U' || texto[i] == 'V'){
                   num[i] = '8';     
           }
           else if (texto[i] == 'W' || texto[i] == 'X' || texto[i] == 'Y' || texto[i] == 'Z'){
                   num[i] = '9';     
           }
           else if (texto[i] == '-'){
                   num[i] = '-';     
           }
           else if (texto[i] == '1'){
                   num[i] = '1';     
           }
           else if (texto[i] == '0'){
           	   num[i] = '0';
           }
           else {
                   num[i] = ' ';  
           }
       }
       num[i] = '\0';
       printf("%s\n", num);
    }
    
    return 0;   
}




