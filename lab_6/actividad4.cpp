#include <stdio.h>

int valor;
int puntos;
int puntos_valor;
int puntos_resta;
int codigo;
int confirmar=1; 


int main() {
  printf("Ingresar el valor del producto que desea comprar \n");
  scanf("%d", &valor);
  printf("El valor del producto es %d\n", valor);
  
  printf("Ingresar el codigo del producto\n");
  scanf("%d", &codigo);
  printf("El codigo del producto es %d\n", codigo);

  printf("Ingresar la cantidad de puntos que tiene el usuario \n");
  scanf("%d", &puntos);
   printf("Su total de puntos acumulados es %d\n", puntos);


  printf("Usuario, ¿desea pagar con puntos? si=1, no=0\n");
    scanf("%d", &confirmar);
  if (confirmar==0){ 
    if (valor<10000){
      if (codigo>=100 && codigo<200){
        puntos= puntos+(valor/100);
        printf("Muchas gracias por su compra\n");
        printf("Total final de puntos: %d \n", puntos);
        }

     else if(codigo>=200 && codigo<300) { 
        puntos= puntos+(valor/50);
        printf("Muchas gracias por su compra\n");
        printf("Total final de puntos: %d\n", puntos);}

    }
    else if(valor>=10000){
      if (codigo>=100 && codigo<200){
        puntos= puntos+(valor/50);
        printf("Muchas gracias por su compra\n");
        printf("Total final de puntos: %d \n", puntos);}

     else if(codigo>=200 && codigo<300) { 
        puntos= puntos+(valor/30);
        printf("Muchas gracias por su compra\n");
        printf("Total final de puntos: %d\n", puntos);}    
    }
    }

  else  {  

    puntos_valor=puntos*10;

    if (puntos_valor>=valor){
      printf("Usuario, tiene los puntos suficientes para completar su compra\n");
         puntos_resta= puntos-(valor/10);
      printf("Compra completada, ahora tiene: %d  puntos restantes\n", puntos_resta);
    }
     else if  (puntos_valor<valor){
      printf("Usuario, no tiene los puntos necesarios para realizar su compra, intentelo nuevamente\n");
    }
  }
  

  }
  
