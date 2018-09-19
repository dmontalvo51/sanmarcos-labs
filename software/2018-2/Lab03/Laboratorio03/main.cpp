#include <iostream>
#include <stdio.h>
//#include "ejercicios.cpp"

using namespace std;

void primerosCuadrados(int n);
void submenu();
void producto();
void primos();
void impares(int n);
void leerConWhile();
void primerosCuadrados(int n);

void menu();

int main()
{
    menu();

    return 0;
}

void menu(){

    char opcion;

    printf("############ LABORATORIO 03 ############\n\n");
    printf("[1] Primeros N Cuadrados\n");
    printf("[2] Impares menores a N\n");
    printf("[3] Leer con While\n");
    printf("[4] Producto\n");
    printf("[5] Primos menores a N\n");
    printf("[6] Submenu Do While\n");
    printf("[0] Salir\n\n");

    printf("Ingsrese opcion :");
   // opcion = getchar();
   cin >>opcion;

    switch(opcion){
        case '1':{
                int n=1;
                printf("Ingrese valor de N :");
                scanf("%d",&n);
                system("clear");
                primerosCuadrados(n);
                break;
                }
        case '2':{
            int n=1;
            printf("Ingrese valor de N :");
            scanf("%d",&n);

            impares(n);
        }break;
        case '3':
            system("clear");
            leerConWhile();
            break;
        case '4':
            system("clear");
            producto();
           break;
        case '6':
            system("clear");
            submenu();
            break;
        case '5':
            system("clear");
           primos();
           break;
        case '0':
            return;
            break;
        default:
            printf("Opcion incorrecta\n");
            break;
    }

    getchar();
    getchar();
    system("clear");
    menu();
}
