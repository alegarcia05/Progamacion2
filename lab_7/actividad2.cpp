#include <stdio.h>
	int num1;
	int num2;
  int resultado;

int main(){

	printf("Por favor, ingrese dos numeros de la forma X, Y para multiplicar\n");
	scanf("%d, %d", &num1, &num2);

  for(int i = 0; i < num2; i++){
    resultado+=num1; 
  }
  printf("%d * %d = %d\n",num1, num2, resultado );
return 0;
}

