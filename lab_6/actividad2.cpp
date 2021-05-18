#include <stdio.h>
int numero1;
int numero2;
int numero3;

int main() {
 printf("Por favor ingrese el primer numero\n");
 scanf("%d", &numero1); 
 printf("Por favor ingrese el segundo numero\n");
 scanf("%d", &numero2);
 printf("Por favor ingrese el tercer numero\n");
 scanf("%d", &numero3);

 if (numero1>numero2 && numero1>numero3){
   printf("El numero mayor es %d\n", numero1);
   }
   else if (numero2>numero1 && numero2>numero3) {
    printf("El numero mayor es %d\n", numero2);
   } else if (numero3>numero1 && numero3>numero2){ 
      printf("El numero mayor es %d\n", numero3);
       } else if (numero1>numero2 && numero2==numero3) {
    printf("El numero mayor es %d\n", numero1);
    }
     else if (numero1>numero2 && numero2==numero3) {
    printf("El numero mayor es %d\n", numero1);}
    else if (numero2>numero1 && numero2==numero3) {
    printf("El numero mayor es %d\n", numero2);}
else if (numero1>numero2 && numero1==numero3) {
    printf("El numero mayor es %d\n", numero1);}

      else {
     printf("Los tres numeros son iguales\n");
   }
}