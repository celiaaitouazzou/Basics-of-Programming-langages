/*
Créer un programme "case_shuffle".

Le programme prend un stream en stdin et sort le même texte en stdout avec la capitalisation qui alterne. exemple:

echo "bonjour ma jolie" | ./case_shuffle
output: bOnJoUr Ma JoLiE

Language: C
Système de compilation: Makefile + (gcc ou clang)
Temps estimé: 2-4 heures
Lignes de codes nécéssaires: 50-150
*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>


int main(void) {
  char arr[1024];
  int c;
  int i=0;

  while((c=getchar())!= EOF){
    if(c == 32){
      i = 0;
      printf("%c",c);
    }
    else {
      if(i%2 == 1 ){
        if(c >= 97 && c <= 122){
          //if odd and no cap, capitalize
          printf("%c",c-32);
        }
        //for any other caracter
        else {
          printf("%c",c);
        }

      }
      else if(i%2 == 0){
        if(c >= 65 && c <= 90){
          //if even and no cap ,carry on 
          printf("%c",c+32);
        }
        else{
          printf("%c",c);
        }
      }
      
    }
    i++;
    //printf("%d",i);
    //printf("\n");
  }
  return 0;
}
