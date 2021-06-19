#include <stdio.h>

char zona[10][10]; 
int mision; 
bool busqueda= false;
int fila;
int columna;
int opcion;

int main() {
   printf("Bienvenidos, le presentamos la zona en donde nuestro robot Acuatico recorrió para buscar los tesoros \n");
    for(int i = 0 ; i < 10 ; i++){
        for(int j = 0 ; j < 10 ; j++){
            zona[i][j] = '-';
        }
    }
    
    printf("%c|%c|%c|%c|%c|%c|%c|%c|%c|%c\n", zona[0][0], zona[0][1], zona[0][2], zona[0][3], zona[0][4], zona[0][5], zona[0][6], zona[0][7], zona[0][8], zona[0][9]);
    printf("-------------------\n");
    printf("%c|%c|%c|%c|%c|%c|%c|%c|%c|%c\n", zona[1][0], zona[1][1], zona[1][2], zona[1][3], zona[1][4], zona[1][5], zona[1][6], zona[1][7], zona[1][8], zona[1][9]);
    printf("-------------------\n");
    printf("%c|%c|%c|%c|%c|%c|%c|%c|%c|%c\n", zona[2][0], zona[2][1], zona[2][2], zona[2][3], zona[2][4], zona[2][5], zona[2][6], zona[2][7], zona[2][8], zona[2][9]);
    printf("-------------------\n");
    printf("%c|%c|%c|%c|%c|%c|%c|%c|%c|%c\n", zona[3][0], zona[3][1], zona[3][2], zona[3][3], zona[3][4], zona[3][5], zona[3][6], zona[3][7], zona[3][8], zona[3][9]);
    printf("-------------------\n");
    printf("%c|%c|%c|%c|%c|%c|%c|%c|%c|%c\n", zona[4][0], zona[4][1], zona[4][2], zona[4][3], zona[4][4], zona[4][5], zona[4][6], zona[4][7], zona[4][8], zona[4][9]);
    printf("-------------------\n");
    printf("%c|%c|%c|%c|%c|%c|%c|%c|%c|%c\n", zona[5][0], zona[5][1], zona[5][2], zona[5][3], zona[5][4], zona[5][5], zona[5][6], zona[5][7], zona[5][8], zona[5][9]);
    printf("-------------------\n");
    printf("%c|%c|%c|%c|%c|%c|%c|%c|%c|%c\n", zona[6][0], zona[6][1], zona[6][2], zona[6][3], zona[6][4], zona[6][5], zona[6][6], zona[6][7], zona[6][8], zona[6][9]);
    printf("-------------------\n");
    printf("%c|%c|%c|%c|%c|%c|%c|%c|%c|%c\n", zona[7][0], zona[7][1], zona[7][2], zona[7][3], zona[7][4], zona[7][5], zona[7][6], zona[7][7], zona[7][8], zona[7][9]);
    printf("-------------------\n");
    printf("%c|%c|%c|%c|%c|%c|%c|%c|%c|%c\n", zona[8][0], zona[8][1], zona[8][2], zona[8][3], zona[8][4], zona[8][5], zona[8][6], zona[8][7], zona[8][8], zona[8][9]);
    printf("-------------------\n");
    printf("%c|%c|%c|%c|%c|%c|%c|%c|%c|%c\n", zona[9][0], zona[9][1], zona[9][2], zona[9][3], zona[9][4], zona[9][5], zona[9][6], zona[9][7], zona[9][8], zona[9][9]);


    while(!busqueda &&  mision< 10) {
    
    if(mision%2 == 0){
    printf("Elija una casilla en la forma fila, columna:\n");
    scanf("%d,%d", &fila, &columna);

      while(zona[fila -1][columna -1] != '-'){
      printf("Este lugar ya ha sido desubierto\n");
      printf("Elija otra zona\n");
      scanf("%d,%d", &fila, &columna);
      }zona[fila - 1][columna - 1]='x' ;

    } else {
      printf("Elija una casilla en la forma fila, columna:\n");

      scanf("%d,%d", &fila, &columna);
        while(zona[fila -1][columna -1] != '-'){
        printf("Este lugar ya ha sido desubierto\n");
        printf("Elija otra zona\n");
        scanf("%d,%d", &fila, &columna);
        } zona[fila - 1][columna - 1]= 'x' ;      
      }
    


    printf("%c|%c|%c|%c|%c|%c|%c|%c|%c|%c\n", zona[0][0], zona[0][1], zona[0][2], zona[0][3], zona[0][4], zona[0][5], zona[0][6], zona[0][7], zona[0][8], zona[0][9]);
    printf("-------------------\n");
    printf("%c|%c|%c|%c|%c|%c|%c|%c|%c|%c\n", zona[1][0], zona[1][1], zona[1][2], zona[1][3], zona[1][4], zona[1][5], zona[1][6], zona[1][7], zona[1][8], zona[1][9]);
    printf("-------------------\n");
    printf("%c|%c|%c|%c|%c|%c|%c|%c|%c|%c\n", zona[2][0], zona[2][1], zona[2][2], zona[2][3], zona[2][4], zona[2][5], zona[2][6], zona[2][7], zona[2][8], zona[2][9]);
    printf("-------------------\n");
    printf("%c|%c|%c|%c|%c|%c|%c|%c|%c|%c\n", zona[3][0], zona[3][1], zona[3][2], zona[3][3], zona[3][4], zona[3][5], zona[3][6], zona[3][7], zona[3][8], zona[3][9]);
    printf("-------------------\n");
    printf("%c|%c|%c|%c|%c|%c|%c|%c|%c|%c\n", zona[4][0], zona[4][1], zona[4][2], zona[4][3], zona[4][4], zona[4][5], zona[4][6], zona[4][7], zona[4][8], zona[4][9]);
    printf("-------------------\n");
    printf("%c|%c|%c|%c|%c|%c|%c|%c|%c|%c\n", zona[5][0], zona[5][1], zona[5][2], zona[5][3], zona[5][4], zona[5][5], zona[5][6], zona[5][7], zona[5][8], zona[5][9]);
    printf("-------------------\n");
    printf("%c|%c|%c|%c|%c|%c|%c|%c|%c|%c\n", zona[6][0], zona[6][1], zona[6][2], zona[6][3], zona[6][4], zona[6][5], zona[6][6], zona[6][7], zona[6][8], zona[6][9]);
    printf("-------------------\n");
    printf("%c|%c|%c|%c|%c|%c|%c|%c|%c|%c\n", zona[7][0], zona[7][1], zona[7][2], zona[7][3], zona[7][4], zona[7][5], zona[7][6], zona[7][7], zona[7][8], zona[7][9]);
    printf("-------------------\n");
    printf("%c|%c|%c|%c|%c|%c|%c|%c|%c|%c\n", zona[8][0], zona[8][1], zona[8][2], zona[8][3], zona[8][4], zona[8][5], zona[8][6], zona[8][7], zona[8][8], zona[8][9]);
    printf("-------------------\n");
    printf("%c|%c|%c|%c|%c|%c|%c|%c|%c|%c\n", zona[9][0], zona[9][1], zona[9][2], zona[9][3], zona[9][4], zona[9][5], zona[9][6], zona[9][7], zona[9][8], zona[9][9]);


    char zona[10][10]= {{2,9,0,0,10,9,6,10,5,4},{9,6,5,0,0,9,6,3,2,8} , {3,3,8,10,6,9,5,4,3,0} , {2,6,3,6,4,3,6,2,8,3} ,{6,6,9,10,3,4,6,2,9,9} , {4,10,4,4,9,0,9,10,8,8}, {2,2,0,3,5,4,4,6,6,5} , {8,4,1,3,9,5,6,6,7,7}, {8,1,4,9,5,7,7,3,4,4} ,{4,8,5,4,2,3,3,2,3,6}} ;

    for(int i = 0 ; i < 10 ; i++){
      for(int j = 0 ; j < 10 ; j++){
          
        if(zona[i][j] == busqueda){
            printf("El número de la casilla [%d][%d] es %d, \n", fila , columna , busqueda);
            break;
        }
        if(i == 10){
            printf("La casilla ya fue encontrada.\n");
        }      
    }}

    printf("1.- NORTE\n");
    printf("2.- SUR\n");
    printf("3.- ESTE\n");
    printf("4.- OESTE\n");
    printf("INDIQUE LA DIRECCION DE AVANCE DEL ROBOT:\n");
    scanf("%d", &opcion);

     switch(opcion){
        case 1: printf("La dirección del robot es hacia el NORTE .\n");
                break;
        case 2: printf("La dirección del robot es hacia el SUR .\n");
                break;
        case 3: printf("La dirección del robot es hacia el  ESTE .\n");
                break;
        case 4: printf("La dirección del robot es hacia el OESTE .\n");
                break;
        default: printf("El usuario ingresó una opción que no es válida.\n");
    }
    mision++;
  }
  return 0;
    }