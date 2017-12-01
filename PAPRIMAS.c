#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    
    char palavra[21];
    int soma, i, cont, t;
    float resto;
    
    while (scanf("%s", palavra)!=EOF){
    	  soma = 0;
          for (i = 0; palavra[i] != '\0'; i++){
              if (palavra[i] == 'a'){
                 soma = soma + 1; 
              }
              else if (palavra[i] == 'b'){
                      soma = soma + 2; 
              }
              else if (palavra[i] == 'c'){
                      soma = soma + 3; 
              }       
              else if (palavra[i] == 'd'){
                      soma = soma + 4; 
              }
              else if (palavra[i] == 'e'){
                      soma = soma + 5; 
              }
              else if (palavra[i] == 'f'){
                      soma = soma + 6; 
              }
              else if (palavra[i] == 'g'){
                      soma = soma + 7; 
              }
              else if (palavra[i] == 'h'){
                      soma = soma + 8; 
              }
              else if (palavra[i] == 'i'){
                      soma = soma + 9; 
              }
              else if (palavra[i] == 'j'){
                      soma = soma + 10; 
              }
              else if (palavra[i] == 'k'){
                      soma = soma + 11; 
              }
              else if (palavra[i] == 'l'){
                      soma = soma + 12; 
              }
              else if (palavra[i] == 'm'){
                      soma = soma + 13; 
              }
              else if (palavra[i] == 'n'){
                      soma = soma + 14; 
              }
              else if (palavra[i] == 'o'){
                      soma = soma + 15; 
              }
              else if (palavra[i] == 'p'){
                      soma = soma + 16; 
              }
              else if (palavra[i] == 'q'){
                      soma = soma + 17; 
              }
              else if (palavra[i] == 'r'){
                      soma = soma + 18; 
              }
              else if (palavra[i] == 's'){
                      soma = soma + 19; 
              }
              else if (palavra[i] == 't'){
                      soma = soma + 20; 
              }
              else if (palavra[i] == 'u'){
                      soma = soma + 21;
              }
              else if (palavra[i] == 'v'){
                      soma = soma + 22; 
              }
              else if (palavra[i] == 'w'){
                      soma = soma + 23; 
              }
              else if (palavra[i] == 'x'){
                      soma = soma + 24; 
              }
              else if (palavra[i] == 'y'){
                      soma = soma + 25; 
              }
              else if (palavra[i] == 'z'){
                      soma = soma + 26; 
              }   
              else if (palavra[i] == 'A'){
                      soma = soma + 27; 
              }
              else if (palavra[i] == 'B'){
                      soma = soma + 28; 
              }
              else if (palavra[i] == 'C'){
                      soma = soma + 29; 
              }
              else if (palavra[i] == 'D'){
                      soma = soma + 30; 
              }
              else if (palavra[i] == 'E'){
                      soma = soma + 31; 
              }
              else if (palavra[i] == 'F'){
                      soma = soma + 32; 
              }
              else if (palavra[i] == 'G'){
                      soma = soma + 33; 
              }
              else if (palavra[i] == 'H'){
                      soma = soma + 34; 
              }
              else if (palavra[i] == 'I'){
                      soma = soma + 35; 
              }
              else if (palavra[i] == 'J'){
                      soma = soma + 36; 
              }
              else if (palavra[i] == 'K'){
                      soma = soma + 37; 
              }
              else if (palavra[i] == 'L'){
                      soma = soma + 38; 
              }
              else if (palavra[i] == 'M'){
                      soma = soma + 39; 
              }
              else if (palavra[i] == 'N'){
                      soma = soma + 40; 
              }
              else if (palavra[i] == 'O'){
                      soma = soma + 41; 
              }
              else if (palavra[i] == 'P'){
                      soma = soma + 42; 
              }
              else if (palavra[i] == 'Q'){
                      soma = soma + 43; 
              }
              else if (palavra[i] == 'R'){
                      soma = soma + 44; 
              }
              else if (palavra[i] == 'S'){
                      soma = soma + 45; 
              }
              else if (palavra[i] == 'T'){
                      soma = soma + 46; 
              }
              else if (palavra[i] == 'U'){
                      soma = soma + 47;
              }
              else if (palavra[i] == 'V'){
                      soma = soma + 48; 
              }
              else if (palavra[i] == 'W'){
                      soma = soma + 49; 
              }
              else if (palavra[i] == 'X'){
                      soma = soma + 50; 
              }
              else if (palavra[i] == 'Y'){
                      soma = soma + 51; 
              }
              else if (palavra[i] == 'Z'){
                      soma = soma + 52; 
              }  
          }
          cont = 0;
          for (i = 1; i <= sqrt(soma); i++){
              resto = soma % i;
              if (resto == 0){
                 cont++;      
              }    
          }
          if (cont >= 2){
             printf("It is not a prime word.\n");         
          }
          else if (soma == 0 || soma < 0){
            printf("It is not a prime word.\n");
          }
          else {
               printf("It is a prime word.\n");
          }
    }
    
    return 0;   
}