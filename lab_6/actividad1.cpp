#include <stdio.h>

 int numero;
 int division;
 int resultado;
 

 int main(){
     printf("Por favor, ingrese un numero\n");
     scanf("%d", &numero);
     division= numero%2;

  if (division==0){
printf("El numero es par\n");

  } else {
    printf("El numero es impar\n");
  }
return 0;
 }