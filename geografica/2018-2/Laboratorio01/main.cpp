#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
void funcionSinTipo();
int funcionQueRetornaUnEntero();

int main(){
    //Escribiendo muchas lineas
    cout<<"Hola Mundo."<<endl;
    int variable=10;
    cout<<"Este es un numero "<<10<<", y esta una variable "<<variable<<endl;
    printf("Esta una linea con Printf y su variable %d. Incluir stdio.h!\n\n",variable);   
    
   //Creando variables y escribiéndolas
    int a=10;
    float b=20.35;
    char c='A';
    char* cadena="Cadena";
    cout<<"Entero : "<<a<<", Decimal : "<<b<<", Caracter : "
    <<c<<", Cadena : "<<cadena<<endl;
    printf("Entero : %d, Decimal : %f, Caracter : %c, Cadena : %s\n\n",a,b,c,cadena);
    
   //Leer entrada del usuario y escribirla
   int entrada;
   printf("Ingrese un numero entero : ");
   cin>>entrada;
   printf("Ingreso el valor : %d \n\n",entrada);
    
    //Llamando funciones
    funcionSinTipo();
    funcionQueRetornaUnEntero();
    
    return 0;
}




void funcionSinTipo(){
     cout<<"Funcion que no retorna nada"<<endl;
}
int funcionQueRetornaUnEntero(){
    int a=100;
    printf("Funcion que retorna un entero : %d \n",a);
    return a;   
}

/*  Este es un comentario
    de muchas lineas
    fuera de la función 
*/


