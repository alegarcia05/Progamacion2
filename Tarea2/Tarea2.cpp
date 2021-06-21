/* Universidad de La Frontera
* Departamento de Ingeniería Eléctrica
*
* ICC-202 PROGRAMACION DE COMPUTADORES
*
* Tarea 2
*
* Autores:
* Nombre 1. Alejandra García Vargas
*           (a.garcia05@ufromail.cl)
* Nombre 2. (mail 2)
* Nombre 3. (mail 3)
* Nombre 4. (mail 4)
*
* Fecha: 20/06/2021
*
* Descripción general del programa
* La finalidad de este programa es facilitarle y mostrarle al usuario las distintas opciones que podemos ofrecerle para su plan de jubilación de una manera aproximada.

*/

#include <stdio.h>

int edad;
long int sueldoM;        // SUELDO MENSUAL CUANDO LA PERSONA TRABAJABA
int confirmar=1;
int opcion;
char nombre[15];
char apellido[20]; 
char rut[8];
long dinero = 0;
long ahorro_total=0;
long int dinero_total = 0;

int main (){  //BIENVENIDA Y GUARDADO DE DATOS 
printf("Bienvenido a Cotizaciones AFP Chile\n");
printf("Ingrese su nombre:\n");
scanf("%s", nombre);
printf("Ingrese su apellido:\n");
scanf("%s", apellido);
printf("Bienvenido %s %s!\n", nombre, apellido);
printf("Por favor ingrese su RUT\n");
scanf("%s", rut); 
 // DATOS QUE ENTREGAR AL USUARIO QUE PERTENECEN A LAS CINCO OPCIONES 
printf("Bienvenido Usuario, le presentamos nuestros planes para administrar sus ahorros para su jubilacion\n");
printf("\n");
printf("Ingrese la edad a la que entró a trabajar\n");
scanf("%d", &edad);
printf("\n");
printf("Ingrese su sueldo mensual\n");
scanf("%ld", &sueldoM);
printf("\n");
printf("Mujeres se jubilan a los 60 años \n");
printf("Hombres se jubilan a los 65 años\n");
printf("\n");
printf("Después de que la persona haya trabajado 15 años, el estado emitirá un bono a futuro de $1.000.000 y así cada 3 años sucesivamente\n");
printf("\n");
 printf("A continuación se presentaran 5 cotizaciones para que usted administre su dinero\n");
printf("\n");
printf("¿Desea continuar?, si=1  no=0\n");
scanf("%d", &confirmar);

if (confirmar==1){
  printf("ingreso de fondos\n");
  printf("------------------\n");

   printf("1.- Primer ingreso de fondos\n");
      int añosT1= 63-edad; 
      int añosJ1= 85-63;
        long operando1= sueldoM*(3/12); 
        long operando2= operando1*añosT1*12;
        long operando3= 1000000 * (añosT1-15)/3;
        long operando4= operando2 + operando3;
        int operando5= operando4/añosJ1;
        printf("  Se descuenta el 12%%  del sueldo mensualmente \n");
        printf("  Cubre hasta los 85 años \n");
        printf("\n");

        printf("EL MONTO APROXIMADO MENSUAL SERÁ=  $ %d POR 22 AÑOS\n" , operando5);
         printf("\n");

    printf("2.- Segundo ingreso de fondos\n");

      int añosJ2= 90-63;
        long operando6= sueldoM*(3/12);  //1
        long operando7= operando6*añosT1*12;  //2
        long operando8= 1000000 * (añosT1-15)/3; //3
        long operando9= operando7 + operando8;  //4 
        int operando10= operando9/añosJ1;   // 5
        printf("  Se descuenta el 15%%  del sueldo mensualmente \n");
        printf("  Cubre hasta los 90 años \n");
        printf("\n");
         printf("EL MONTO APROXIMADO MENSUAL SERÁ= $ %d   POR 27 AÑOS\n" , operando10);
          printf("\n");


    printf("3.- Tercer ingreso de fondos\n");

       int añosJ3= 95-63;
        long operando11= sueldoM*(3/12);  //1
        long operando12= operando11*añosT1*12;  //2
        long operando13= 1000000 * (añosT1-15)/3; //3
        long operando14= operando12 + operando13;  //4 
        int operando15= operando14/añosJ1;   // 5
        printf("  Se descuenta el 18%%  del sueldo mensualmente \n");
        printf("  Cubre hasta los 95 años \n");
        printf("\n");
        printf("EL MONTO APROXIMADO MENSUAL SERÁ= $ %d   POR 32 AÑOS\n" , operando15);
         printf("\n");


    printf("4.-Cuarto ingreso de fondos\n");

      int añosJ4= 100-63;
        long operando16= sueldoM*(3/12);  //1
        long operando17= operando16*añosT1*12;  //2
        long operando18= 1000000 * (añosT1-15)/3; //3
        long operando19= operando17 + operando18;  //4 
        int operando20= operando19/añosJ1;   // 5
       printf("  Se descuenta el 21%%  del sueldo mensualmente \n");
        printf("  Cubre hasta los 100 años \n");
        printf("\n");
        printf("EL MONTO APROXIMADO MENSUAL SERÁ= $ %d    POR 37 AÑOS\n" , operando20);
         printf("\n");

    
    printf("5.-Quinto ingreso de fondos\n");
     
      ahorro_total= (sueldoM * 15)/100; 
      ahorro_total= ahorro_total * añosT1 * 12;
      dinero_total= (ahorro_total * 2)/100; 
      
      // ARREGLAR (agregar años trabajados, ya que solo calcula lo acumulado en 1 mes)

      dinero = dinero_total;
       printf("Puede retirar todo su dinero, pero perderá 2%% de su monto que será cobrado como impuesto\n");
       printf("EL MONTO TOTAL QUE SE AGREGARÁ A SU CUENTA BANCARIA ES = $  %ld \n", dinero);

         printf("\n");



    printf("Ingrese la opción para seleccionar el método de pago que desea obtener, si no desea ninguno, presione 6 para salir:\n");
    scanf("%d", &opcion);

     switch(opcion){
        case 1: 
        printf("SU MONTO MENSUAL SERÁ=  $ %d\n" , operando5);
        printf("Solicitud confirmada\n"); 
        printf("Gracias por su preferencia, que tenga un buen día\n"); 
      


                break;
        case 2: 
        printf("SU MONTO MENSUAL SERÁ= $ %d\n" , operando10);
         printf("Solicitud confirmada\n"); 
        printf("Gracias por su preferencia, que tenga un buen día\n"); 
      


                break;
        case 3: 
        printf("SU MONTO MENSUAL SERÁ= $ %d\n" , operando15);
        printf("Solicitud confirmada\n"); 
        printf("Gracias por su preferencia, que tenga un buen día\n"); 
      


                break;
        case 4: 
        printf("SU MONTO MENSUAL SERÁ= $ %d\n" , operando20);
          printf("Solicitud confirmada\n"); 
        printf("Gracias por su preferencia, que tenga un buen día\n"); 
      


                break;
        case 5: 
        printf("EL MONTO TOTAL QUE SE AGREGARÁ A SU CUENTA BANCARIA ES = $  %ld \n", dinero);
          printf("Solicitud confirmada\n"); 
        printf("Gracias por su preferencia, que tenga un buen día\n"); 
      



                break;
        default: printf("Muchas gracias por consultar sus datos en nuestra AFP\n");
    }


}
else {
  printf("Hasta luego, que tenga un buen día\n");
}
}