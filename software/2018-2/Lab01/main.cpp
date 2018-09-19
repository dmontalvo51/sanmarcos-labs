#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void obtenerSiglo(int);
void perroGato(int);
void limpiar();
int leerEntero();
void enterParaContinuar();

int main(){
    setlocale(LC_CTYPE,"Spanish");

    char op;

    do{
        cout<<"#### Laboratorio 1 ####\n\n";
        cout<<"[1] Siglo de año\n";
        cout<<"[2] Edad gatos y perros\n";
        cout<<"[0] Salir\n";
        cout<<"Ingrese opción: ";

        cin>>op;

        switch(op){
            case '1':
                limpiar();
                obtenerSiglo(leerEntero());
                break;
            case '2':
                limpiar();
                perroGato(leerEntero());
                break;
            case '0':
                return 0;
            default:
                limpiar();
                break;
        }

        enterParaContinuar();
        limpiar();

    }while(op!='0');


    return 0;

}


/* Ejercicio 01 - Siglo del año

 Para los años 0 al 100 --> Siglo 1
 Para los años 101 al 200 --> Siglo 2
 ... y asi consecutivamente. Implementar una función

    void yearCentury(int)

que reciba un valor entero (año) y escriba en pantalla el siglo al que corresponde

*/

void obtenerSiglo(int anio){
    int siglo;
    siglo = (anio / 100 ) ;
    if(anio%100==0)
        printf("Pertenece al siglo %d \n",siglo);
    else
        printf("Pertenece al siglo %d \n",siglo+1);
}


/* Ejercicio 02 - Edad Perro y Gato
    Gatos
    15 años gato el 1er año
    +9 años gato el 2do año
    +4 años gato para cada año en adelante

    Perros
    15 años perro el 1er año
    +9 años perro el 2do año
    +5 años perro para cada año en adelante

    Desarrollar una función  getCatDogYears(int) que imprima en una línea [Años humano, Años Perro, Años Gato]

*/


void perroGato(int edad){
    int gato,perro;

    if(edad<=0){
        gato=0;perro=0;edad=0;
    }else if(edad==1){
        gato=15;perro=15;
    }else{
        gato=24+4*(edad-2);
        perro=24+5*(edad-2);
    }
    printf("[Humano,Perro,Gato]\n");
    printf("[  %d  , %d  , %d ]\n",edad,perro,gato);

}

int leerEntero(){
    printf("Ingrese valor :");
    int ret;
    cin>>ret;
    return ret;
}

void limpiar(){
    //Para Windows
    //system("cls")
    //Para Linux
    system("clear");
}

void enterParaContinuar(){
  int c;
  printf( "Presione ENTER para continuar... " );
  cin.get();
  fflush( stdout );
  do c = cin.get(); while ((c != '\n') && (c != EOF));
}




