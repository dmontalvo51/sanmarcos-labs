#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <locale>

using namespace std;

void caso1();
void caso2();
void caso3();

int main()
{
    setlocale(LC_ALL,"Spanish");
    caso1();
    caso2();
    caso3();
    return 0;
}

void caso1(){
    float n;
    printf("Ingrese monto en soles :");cin>>n;

    if(n<0.0){
      printf("El monto tiene que ser mayor a 0");
    }
    printf("El monto ingresado es S/ %.2f, su IGV(18%) es S/ %.2f y el monto sin impuestos es S/ %.2f\n",n,0.18*n,0.82*n);
    printf("El monto en dólares es $ %.2f, en euros EUR %.2f y en pesos mexicanos MXN %.2f\n",n/3.33,n/3.86,n/0.18);

}

void caso2(){
   int a,b,c,*pb,*pc;

    printf("Ingrese A :");cin>>a; if(a<0){printf("Valor incorrecto(<0)");return;}
    printf("Ingrese B :");cin>>b; if(b<0){printf("Valor incorrecto(<0)");return;}
    printf("Ingrese C :");cin>>c; if(c<0){printf("Valor incorrecto(<0)");return;}
    pb=&b;pc=&c;

    int *mayor=&a,*medio=&a,*menor=&a;

    //Mayor
    if(*pb>*mayor){mayor=pb;}
    if(*pc>*mayor){mayor=pc;}
    //Menor
    if(*pb<*menor){menor=pb;}
    if(*pc<*menor){menor=pc;}
    //Medio
    if(*pb<*mayor && *pb>*menor){medio=pb;}
    if(*pc<*mayor && *pb>*menor){medio=pc;}

    printf("El mayor es %d y el menor es %d\n",*mayor,*menor);

    printf("El mayor menos el menor : %d\n",*mayor-*menor);

    printf("El mayor más el medio: %d\n",*mayor+*medio);

}


void caso3(){
    int n;
    printf("Ingrese N :");cin>>n;

    float precios[n];
    char tipos[n];

    float proma=0.0,promb=0.0,promc=0.0,promadesc=0.0,prombdesc=0.0,promcdesc=0.0;
    int a=0,b=0,c=0;

    //Precios invalidos como -1

    char tipo;float precio;
    for(int i=0;i<n;i++){
        printf("Ingrese tipo del producto:");cin>>tipo;

        if(tipo!='a' && tipo!='b' && tipo!='c'){
            printf("Tipo inválido\n");
            precios[i]=-1;
            continue;
        }
        printf("Ingrese precio del producto :");cin>>precio;
        if(precio<100 || precio>200){
            printf("Precio inválido\n");
            precios[i]=-1;
            continue;
        }
        tipos[i]=tipo;
        precios[i]=precio;
    }

    float  desc;
    cout<<"LISTA DE PRODUCTOS"<<endl<<endl;
    for(int i=0;i<n;i++){
        if(precios[i]==-1)continue;

        if(tipos[i]=='a'){
            desc=5.0;
            a++;
            proma+=precios[i];
            promadesc+=precios[i]*(100.0-desc)/100.0;
        }

        if(tipos[i]=='b'){
            desc=10.0;
            b++;
            promb+=precios[i];
            prombdesc+=precios[i]*(100.0-desc)/100.0;
        }

        if(tipos[i]=='c'){
            desc=15.0;
            c++;
            promc+=precios[i];
            promcdesc+=precios[i]*(100.0-desc)/100.0;
        }

        printf("Producto[%d] : Tipo %c , precio : S/ %.2f, Se aplica %.0f%% de DESC. Precio c/desc : S/ %.2f \n",i+1,tipos[i],precios[i],desc,precios[i]*(100.0-desc)/100.0);

    }

    printf("Productos tipo A .  %d productos\n",a);
    printf("Precio promedio : S/ %.2f , Precio con descuento promedio : S/ %.2f\n",proma/(float)a,promadesc/(float)a);
    printf("Productos tipo B .  %d productos\n",b);
    printf("Precio promedio : S/ %.2f , Precio con descuento promedio : S/ %.2f\n",promb/(float)a,prombdesc/(float)a);
    printf("Productos tipo C .  %d productos\n",c);
    printf("Precio promedio : S/ %.2f , Precio con descuento promedio : S/ %.2f\n",promc/(float)a,promcdesc/(float)a);

}
