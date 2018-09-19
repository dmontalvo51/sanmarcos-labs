#include <stdlib.h>
#include <iostream>
#include <stdio.h>

using namespace std;

void primerosCuadrados(int n){

    for(int i=1;i<=n;i++){
       printf("%d ",i*i);
    }
    printf("\n");
}

void submenu(){
    char op;
    do{

        printf("SUBMENU\n");
        printf("1 SUBMENU\n");
        printf("2 SUBMENU\n");
        printf("3 Exit\n");
        cin>>op;


        switch(op){
                case '1':
                case '2':
                    printf("Opcion elegida : %c \n",op);
                    break;
                case '3':
                    printf("Saliendo del submenu\n");
                    break;
                default:
                    printf("Opcion incorrecta\n");
                    break;
        }
    }
    while(op!='3');
    return;

}

void impares(int n){
    int i=1;
    do{
        printf("%d ",i);
    i+=2;
    }
    while(i<n);
    printf("\n");

}

void producto(){
    int a,b;
    printf("Ingrese dos valores enteros :");
    cin>>a>>b;

    int p=0;
    while(b>0){
        p+=a;
        b--;
    }

    printf("Producto : %d",p);
}

void primos(){
     int n=0;
     printf("Ingrese valor de N :");
     cin>>n;

     int p=2;
     printf("1 ");

     while(p<n){
        int div=2;
        while(div<p){
            if(p%div!=0) div++;
            else break;
        }
        if(div==p){
            printf("%d ",p);
        }
        p++;
     }

     printf("\n");

}


void leerConWhile(){

    char op=' ';

    while(op!='X'){
        printf("\nIngrese una caracter :");
        cin>>op;
    }

}
