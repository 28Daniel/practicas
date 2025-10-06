#include<stdio.h>

int longitudCadena(char *cadena);

int main(){
  char cadena[]=amigo;
  int longitud=longitudCadena(cadena);
  
  printf("la longitud de la cadena es: %d", longitud);
}

int longitudCadena(char *cadena);{
  int longitud=0;
  
  while(cadena[longitud]=!'\0'){
    longitud++;
  }
}


