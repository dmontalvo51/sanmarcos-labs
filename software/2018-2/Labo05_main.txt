#include <iostream>
#include <stdio.h>

using namespace std;

void arreglos();
void cadenas();
void tablaMultiplicar();
void promedioMaxMin();
void burbuja();
void subcadena();
void sumacadenas();

void menu();

int main()
{
   char opcion;
   do{

        printf("############ LABORATORIO 05 - Arreglos ############\n\n");
        printf("[1] Arreglos\n");
        printf("[2] Cadenas\n");
        printf("[3] Tabla de Multiplicar\n");
        printf("[4] Promedio, max y min en Arreglo Random\n");
        printf("[5] Subcadena\n");
        printf("[6] Suma de cadenas\n");
        printf("[7] Ordenamiento de Burbuja\n");
        printf("[0] Salir\n\n");
        printf("#########################################\n");
        cout<<"Ingrese opcion :";

       cin >>opcion;

       cin.get();
       system("clear");
        switch(opcion){
            case '1':arreglos();break;
            case '2':cadenas();break;
            case '3':tablaMultiplicar();break;
            case '4':promedioMaxMin();break;
            case '5':subcadena();break;
            case '6':sumacadenas();break;
            case '7':burbuja();break;
            case '0':return 0;break;
            default:printf("Opcion incorrecta\n");break;
        }

        cin.get();cin.get();
        system("clear");

   }while(opcion!='0');

    return 0;
}

