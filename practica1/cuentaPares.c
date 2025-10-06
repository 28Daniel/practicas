#include<stdio.h>

int cuentaPares(int *arr, int*size);

int main(){
  int numeros[]={1,2,3,4,5,6,7,8,9,10};
  int tam = size(numeros)/size(numeros);
  
  int cantidadPares=cuentaPares(numeros,tam);
  printf("cantidad de numeros pares es:%d", cantidadPares);
}
int cuentaPares(int *arr, int *size){
int cont=0;

for(int i=0; i<size; i++){
  if(*arr[i]%2==0){
    cont++;
  }
  }
}
