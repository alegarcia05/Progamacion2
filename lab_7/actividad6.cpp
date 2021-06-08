#include <stdio.h>

int numero1=0;
int numero2=1;
int resultado;
int numero;

int main(){ 
  printf("Ingrese un numero:\n");
  scanf("%d", &numero);
  printf("%d\n", numero1);
  printf("%d\n", numero2);
  for(int i = 0; i < numero; i++){
    resultado = numero1 + numero2;
    numero1 = numero2;
    numero2 = resultado;

    printf("%d\n", resultado);
  }  return 0;}