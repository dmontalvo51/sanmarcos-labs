#include <iostream>
#include <stdio.h>

using namespace std;

void punteros();
void parimpar();
void punterosArreglos();
void funcionesPunteros();
void intercambio();



int main()
{
   char opcion;
   do{

        printf("############ LABORATORIO 06 - Punteros ############\n\n");
        printf("[1] Punteros\n");
        printf("[2] Par o impar con punteros\n");
        printf("[3] Punteros en arreglos\n");
        printf("[4] Funciones con punterosn");
        printf("[5] Intercambio\n");
        printf("[0] Salir\n\n");
        printf("#########################################\n");
        cout<<"Ingrese opcion :";

       cin >>opcion;

       system("clear");
        switch(opcion){
            case '1':punteros();break;
            case '2':parimpar();break;
            case '3':punterosArreglos();break;
            case '4':funcionesPunteros();break;
            case '5':intercambio();break;
            case '0':return 0;break;
            default:printf("Opcion incorrecta\n");break;
        }
        getchar();
        getchar();
        system("clear");

   }while(opcion!='0');

    return 0;
}

