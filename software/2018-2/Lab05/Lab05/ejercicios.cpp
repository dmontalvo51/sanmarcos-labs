#include <stdlib.h>
#include <iostream>
#include <stdio.h>

#include <cstdlib>
#include <ctime>

using namespace std;

void arreglos(){
    cout<<"Ejemplo de Arreglos"<<endl<<endl;

    int arreglo[10]={1,2,3,4,5,6,7,8,9,10};

    //Imprimir arreglo
    for(int i=0;i<10;i++){
        printf("%3d",arreglo[i]);
    }
    printf("\n");

    //Modificando elementos del arreglo
    for(int i=0;i<10;i++){
        if(arreglo[i]%2==0){
            arreglo[i]=0;
        }
    }

    //Imprimir arreglo. Pasar a funcion
    for(int i=0;i<10;i++){
        printf("%-3d",arreglo[i]);
    }
    printf("\n");
    cout<<arreglo<<endl; //No funciona para arreglos de enteros
}

void cadenas(){

    char cadena[11]={'A','l','g','o','r','i','t','m','i','c','a'};
    cout<<cadena<<endl;

    char cad3[]="Va a estar dificil";
    printf("%s\n",cad3);

    cadena[3]='#';cadena[7]='#';cadena[9]='#';
    cout<<cadena<<endl;

    int n=sizeof(cad3)/sizeof(cad3[0]);
    int i=0;
    while(i<n){
        if(cad3[i]==' ')
            cad3[i]='#';
        i++;
    }
    cout<<cad3<<endl;

}


void tablaMultiplicar(){
    int n;
    printf("Ingrese numero de la tabla :"); cin>>n;
    int tabla[12];
    for(int i=0;i<12;i++){
        tabla[i]=(i+1)*n;
    }

    cout<<"TABLA DEL "<<n<<endl;
    for(int i=0;i<12;i++){
        printf(" %-3d x %-3d = %d\n",n,i+1,tabla[i]);
    }

}


void promedioMaxMin(){
    srand(time(NULL));
    int n;
    printf("Ingrese tamaño de arreglo (MAX 1000) :"); cin>>n;
    int tabla[n];
    cout<<endl;
    for(int i=0;i<n;i++){
        tabla[i]=rand()%100;
        printf("%-3d",tabla[i]);
    }

    int max=0,min=100;
    float promedio;

    for(int i=0;i<n;i++){
        promedio+=tabla[i];

        if(tabla[i]>max)
            max=tabla[i];

        if(tabla[i]<min)
            min=tabla[i];
    }

    printf("\n\nPromedio : %f\n",promedio/(float)n);
    printf("MAX : %d\n",max);
    printf("MIN: %d\n",min);



}

void subcadena(){
    char cadena[100];
    int a,b;
    cout<<"Ingrese cadena :"; cin.get(cadena,100);
    cout<<"Ingrese a: "; cin>>a;
    cout<<"Ingrese b: "; cin>>b;

    if(a>b){
        printf("Error. A debe ser menor a b");
        return;
    }

    char subcadena[b-a];
    int j=0;
    for(int i=a;i<b;i++){
        subcadena[j]=cadena[i];
        j++;
    }
    subcadena[j]='\0';

    printf("Subcadena: %s",subcadena);

}

void sumacadenas(){

    char cadA[100];
    char cadB[100];

    cout<<"Ingrese cadena A:"; cin.get(cadA,100);
    cout<<"Ingrese cadena B:"; cin.get(cadB,100);

}






void burbuja(){}
