/* El algoritmo acepta y almacena un número en la variable mes en respuesta a la primera pregunta y acepta y
almacena un número en la variable día en respuesta a la segunda pregunta. Si el mes introducido no está entre
1 y 12 inclusive, se debe visualizar un mensaje de información al usuario advirtiéndole de que el número
introducido no es válido como mes; de igual forma se procede con el número que representa el día del mes si no
está en el rango entre 1 y 31.
*/
#include<stdio.h>


int main(int argc, char const *argv[])
{
    int dia, mes;
    dia = 0;
    mes = 0;
    printf("Introduzca un mes (1 para enero, 2 para febrero, 3 para marzo, 4 para abril, 5 para mayo, 6 para junio, 7 para julio, 8 para agosto, 9 para septiembre, 10 para octubre, 11 para noviembre, 12 para diciembre. \n");
    scanf("%i", &mes);

    switch (mes>=1 && mes<=12)
    {
    case 1:
        printf("Enero\n");
        printf("Intoduzca un día del mes\n");
        scanf("%i", &dia);
           if (dia<0 || dia>31)
           {
              printf("El numero no está en el rango de 1 y 31\n");
           }
            printf("El día es %i del mes %i", dia, mes);
        break;
    case 2:
        printf("Febrero\n");
        printf("Intoduzca un día del mes\n");
        scanf("%i", &dia);
        if (dia<0 || dia>29)
           {
              printf("El numero no está en el rango de 1 y 29\n");
           }else{
               printf("El día es %i del mes %i", dia, mes);
           }
        break;
    case 3:
        printf("Marzo\n");
        printf("Intoduzca un día del mes\n");
        scanf("%i", &dia);
        if (dia<0 || dia>31)
           {
              printf("El numero no está en el rango de 1 y 31\n");
           }
            printf("El día es %i del mes %i", dia, mes);
        break;
    case 4:
        printf("Abril\n");
        printf("Intoduzca un día del mes\n");
        scanf("%i", &dia);
        if (dia<0 || dia>30)
           {
              printf("El numero no está en el rango de 1 y 30\n");
           }
            printf("El día es %i del mes %i", dia, mes);
        break;
    case 5:
        printf("Mayo\n");
        printf("Intoduzca un día del mes\n");
        scanf("%i", &dia);
        if (dia<0 || dia>31)
           {
              printf("El numero no está en el rango de 1 y 31\n");
           }
            printf("El día es %i del mes %i", dia, mes);
    case 6:
        printf("Junio\n");
        printf("Intoduzca un día del mes\n");
        scanf("%i", &dia);
        if (dia<0 || dia>30)
           {
              printf("El numero no está en el rango de 1 y 30\n");
           }
            printf("El día es %i del mes %i", dia, mes);
        break;
    case 7:
        printf("Julio\n");
        printf("Intoduzca un día del mes\n");
        scanf("%i", &dia);
        if (dia<0 || dia>31)
           {
              printf("El numero no está en el rango de 1 y 31\n");
           }
            printf("El día es %i del mes %i", dia, mes);
        break;
    case 8:
        printf("Agosto\n");
        printf("Intoduzca un día del mes\n");
        scanf("%i", &dia);
        if (dia<0 || dia>31)
           {
              printf("El numero no está en el rango de 1 y 31\n");
           }
            printf("El día es %i del mes %i", dia, mes);
        break;
    case 9:
        printf("Septiembre\n");
        printf("Intoduzca un día del mes\n");
        scanf("%i", &dia);
        if (dia<0 || dia>30)
           {
              printf("El numero no está en el rango de 1 y 30\n");
           }
            printf("El día es %i del mes %i", dia, mes);
        break;
    case 10:
        printf("Octubre\n");
        printf("Intoduzca un día del mes\n");
        scanf("%i", &dia);
        if (dia<0 || dia>31)
           {
              printf("El numero no está en el rango de 1 y 31\n");
           }
            printf("El día es %i del mes %i", dia, mes);
        break;
    case 11:
        printf("Noviembre\n");
        printf("Intoduzca un día del mes\n");
        scanf("%i", &dia);
        if (dia<0 || dia>30)
           {
              printf("El numero no está en el rango de 1 y 30\n");
           }
            printf("El día es %i del mes %i", dia, mes);
        break;
    case 12:
        printf("Diciembre\n");
        printf("Intoduzca un día del mes\n");
        scanf("%i", &dia);
        if (dia<0 || dia>31)
           {
              printf("El numero no está en el rango de 1 y 31\n");
           }
            printf("El día es %i del mes %i", dia, mes);
        break;
    
    default:
        printf("El numero introducido no es válido como mes\n");
        printf("Digite una opcion válida");
        break;
    }
    return 0;
}
