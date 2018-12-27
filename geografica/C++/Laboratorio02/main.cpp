#include <cstdlib>
#include <iostream>

using namespace std;
void tiposDeDato();
void operaciones();

int main()
{
    tiposDeDato();
    operaciones();
}

void tiposDeDato(){
     //ENTEROS
     int entero=50;
     printf("Entero : %d \n",entero);
     //DECIMALES
     float decimal=50.55;
     printf("Decimal : %f \n",decimal);
     double doubleDec=50.2222222;
     printf("Decimal Doble : %f \n",doubleDec);
     //CARACTERES Y CADENAS
     char caracter='A';
     printf("Caracter : %c \n",caracter);
     printf("Caracter : %d \n",caracter);
     char cadena[]="Cadena de texto";
     printf("Cadena de caracters : %s",cadena);
               
}
