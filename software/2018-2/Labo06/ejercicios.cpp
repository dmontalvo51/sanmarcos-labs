#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int * generarArregloEnteros(int t);
void  imprimirArreglo(int *,int);


void punteros(){

    int number,*p;

    cout<<"Ingrese un valor : "; cin>>number;
    cout<<"El valor de la variable number es :"<<number<<endl;
    cout<<"La dirección de 'number' es :"<<&number<<endl;
    p=&number;
    cout<<"La dirección de 'number' tambien es:"<<p<<endl;
    cout<<"El valor de 'number' tambien es:"<<*p<<endl;

}

void parimpar(){
    int number,*pnumber;
    printf("Ingrese un valor entero: "); cin>>number;
    pnumber=&number;

    if(*pnumber%2==0)
        printf("El numero %d es PAR\n",*pnumber);
    else
       printf("El numero %d es IMPAR\n",*pnumber);

    printf("Su direccion de memoria es %p\n",pnumber);
}

void punterosArreglos(){
    int n,*p;
    printf("Ingrese tamaño de arreglo (MAX 1000) :"); cin>>n;

    int * tabla=generarArregloEnteros(n);
    imprimirArreglo(tabla,n);

    p=tabla;

    for(int i=0;i<n;i++){
        printf("Elemento [%d] : %d  -> direccion : %p\n",i,tabla[i],p++);
    }


}

void funcionesPunteros(){


}
void intercambio(){}




int * generarArregloEnteros(int t){

    int *tabla=new int[t];

    for(int i=0;i<t;i++){
        tabla[i]=rand()%100;
    }

    return tabla;
}

void imprimirArreglo(int * arreglo,int t){
    for(int i=0;i<t;i++){
        printf("%3d",arreglo[i]);
    }
    printf("\n");
}


