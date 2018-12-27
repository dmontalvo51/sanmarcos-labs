#include <cstdlib>
#include <iostream>
#include <stdio.h>
//#include <conio.h>
#include <clocale>

using namespace std;
void getAnio();
void perroGato();
void calculadora();
void poligonos();
void primerosCuadrados();
void impares();
void sumarHasta();
void menosMultiplos7();
//Para la casa
void division();
void raizCuadrada();

int main()
{
   setlocale(LC_ALL,"Spanish");

//    getAnio();
//    perroGato();
//    calculadora();
//  poligonos();
//  primerosCuadrados();
//  impares();
//sumarHasta();
menosMultiplos7();
    return 0;
}

void getAnio(){
    int anio,siglo;
    cout<<"Ingrese el año : ";cin>>anio;

    siglo = (anio / 100 ) ;
       printf("Pertenece al siglo %d \n",siglo+1);
}

void perroGato(){
    int gato,perro,edad;
    cout<<"Ingrese años : ";cin>>edad;

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

void calculadora(){
   char op;
   float a,b;
   printf("[s] SUMA\n");
   printf("[r] RESTA\n");
   printf("[m] MULTIPLICACION\n");
   printf("[d] DIVISION\n");
   cin>>op;

   cout<<"Ingrese A: ";cin>>a;
   printf("Ingrese B: ");cin>>b;

   switch(op){
       case 's':printf("Suma : %f\n",a+b);break;
       case 'r':printf("Resta : %f\n",a-b);break;
       case 'm':printf("Multiplicacion : %f\n",a*b);break;
       case 'd':printf("Division : %f\n",a/b);break;
   }
}


void poligonos(){
   int op;
   float a,b;
   printf("[0] CIRCULO\n");
   printf("[1,2 o 3] TRIANGULO\n");
   printf("[4] CUADRADO\n");
   printf("[5] PENTAGONO\n");
   printf("[6] PENTAGONO\n");
   cin>>op;


   switch(op){
       case 0:
            cout<<"Ingrese radio :";cin>>a;
            printf("Área del circulo : %f\n",3.1416*a*a);
            break;
       case 1:
       case 2:
       case 3:
            cout<<"Ingrese base :";cin>>a;
            cout<<"Ingrese altura :";cin>>b;
            printf("Área del triangulo : %f\n",a*b/2);
            break;
       case 4:
            cout<<"Ingrese lado :";cin>>a;
            printf("Área del cuadrado : %f\n",a*a);
            break;
       case 5:
            cout<<"Ingrese lado :";cin>>a;
            cout<<"Ingrese apotema:";cin>>b;
            printf("Área del pentagono : %f\n",5*a*b/2);
            break;
       case 6:
            cout<<"Ingrese lado :";cin>>a;
            cout<<"Ingrese apotema:";cin>>b;
            printf("Área del hexagono : %f\n",5*a*b/2);
            break;
       default:
            printf("Opcion invalida");
            break;
   }
}

void primerosCuadrados(){
    int n;
    cout<<"Ingrese n : ";cin>>n;

    for(int i=1;i<=n;i++){
       printf("%d ",i*i);
    }
    printf("\n");
}

void impares(){
    int n,cont=0;
    cout<<"Ingrese n : ";cin>>n;

    int i=1;
    while(i<n){
       if(i%2!=0){
        printf("%d ",i);
        cont++;
       }

       i++;
    }

    printf("\n Se encontro un total de %d impares",cont);
}

void sumarHasta(){
     int suma=0,a;


     while(true){
        printf("Ingrese un entero : ");
        cin>>a;

        if(a==0){
          break;
        }

        suma+=a;
     }

     cout<<"La suma fue : "<<suma<<endl;
}

void menosMultiplos7(){

    int n;
    cout<<"Ingrese n : ";cin>>n;

    for(int i=1;i<n;i++){
        if(i%7==0){continue;}

        printf("%d ",i);

    }

}
