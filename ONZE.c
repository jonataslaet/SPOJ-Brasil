#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    
    char num[1001];
    int somapar, somaimp, tam, i, restimp, restpar;
    
    do{
      somapar = 0;
      somaimp = 0;
      scanf("%s", &num);
      tam = strlen(num);
      if (strcmp(num, "0")!=0){
         for (i = 0; i < tam; i++){
             switch(num[i]){
                   case '0':{
                        if (i % 2 == 0){
                           somapar = somapar + 0;      
                        }
                        else {
                             somaimp = somaimp + 0;     
                        }
                   break;  
                   }
                   case '1':{
                        if (i % 2 == 0){
                           somapar = somapar + 1;      
                        }
                        else {
                             somaimp = somaimp + 1;     
                        }
                   break;  
                   }
                   case '2':{
                        if (i % 2 == 0){
                           somapar = somapar + 2;      
                        }
                        else {
                             somaimp = somaimp + 2;     
                        }
                   break;  
                   }
                   case '3':{
                        if (i % 2 == 0){
                           somapar = somapar + 3;      
                        }
                        else {
                             somaimp = somaimp + 3;     
                        }
                   break;  
                   }
                   case '4':{
                        if (i % 2 == 0){
                           somapar = somapar + 4;      
                        }
                        else {
                             somaimp = somaimp + 4;     
                        }
                   break;  
                   }
                   case '5':{
                        if (i % 2 == 0){
                           somapar = somapar + 5;      
                        }
                        else {
                             somaimp = somaimp + 5;     
                        }
                   break;  
                   }
                   case '6':{
                        if (i % 2 == 0){
                           somapar = somapar + 6;      
                        }
                        else {
                             somaimp = somaimp + 6;     
                        }
                   break;  
                   }
                   case '7':{
                        if (i % 2 == 0){
                           somapar = somapar + 7;      
                        }
                        else {
                             somaimp = somaimp + 7;     
                        }
                   break;  
                   }
                   case '8':{
                        if (i % 2 == 0){
                           somapar = somapar + 8;      
                        }
                        else {
                             somaimp = somaimp + 8;     
                        }
                   break;  
                   }
                   case '9':{
                        if (i % 2 == 0){
                           somapar = somapar + 9;      
                        }
                        else {
                             somaimp = somaimp + 9;     
                        }
                   break;  
                   } 
             }              
          }
          restpar = somapar % 11;
          restimp = somaimp % 11;
          if (restpar % 11 == restimp % 11){
             printf("%s is a multiple of 11.\n", num);     
          }
          else{
               printf("%s is not a multiple of 11.\n", num);     
          } 
      } 
                   
    }while(strcmp(num, "0")!=0);
    
    return 0;   
}
