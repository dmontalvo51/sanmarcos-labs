#include <cstdlib>
#include <iostream>
#include <stdio.h>
//#include <conio.h>
#include <iomanip>
#include <locale>

#include <ejercicios.h>

using namespace std;

void cabecera();

int main()
{
    setlocale(LC_ALL,"Spanish");
    cabecera();

    ejercicio22();

    cout<<endl;

    return 0;
}

void cabecera(){
    printf("UNIVERSIDAD NACIONAL MAYOR DE SAN MARCOS   \n");
    printf("Laboratorio de Programacion   \n");
    printf("EJERCICIOS PROPUESTOS Nro. 1 - Secuenciales y Condicionales\n\n");
}





