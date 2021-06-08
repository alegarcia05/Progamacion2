#include <stdio.h>

int numero;
int div=0;
int a;

int main(){ 
    printf("Introduzca un numero para buscar los numeros primos entre 1 y ese numero:\n");
    scanf("%d",&numero);

  for(int j = 1; j < numero; j++){
    a=j;
    for(int i = 1; i <= a; i++){
        if(a%i==0){ 
        div=div+1;
        }
      }
        if(div==2){
      printf("%d\n", a);}
      div=0;
    }
	return 0;
}