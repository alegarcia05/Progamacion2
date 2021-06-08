#include <stdio.h>

int numero=0;
int resultado;

int main(){ 
while(numero>=0){
printf("Ingrese un numero\n");
scanf("%d", &numero);
resultado= resultado + numero;
}
printf("El resultado tiene valor: %d\n", resultado);
	return 0;
}