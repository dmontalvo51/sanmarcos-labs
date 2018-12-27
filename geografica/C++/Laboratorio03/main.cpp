#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
void operadores();
void condicionales();

int main()
{
    operadores();
    condicionales();
 
    return 0;
}


void condicionales(){
    int a,b;
    printf("Valor A : ");
    cin>>a;
    printf("Valor B : ");
    cin>>b; 
    
    if(a>b){
      cout<<"A es mayor a B"<<endl;       
    }else if(b>a){
      cout<<"B es mayor a A"<<endl;       
    }else{
      cout<<"A es igual a B"<<endl;       
    }

    cout<<"Fin condicionales"<<endl;    

}


void operadores(){
    
    int a,b,result,suma,resta;
    //A 10, B 5
    printf("Valor A : ");
    cin>>a;
    printf("Valor B : ");
    cin>>b;    
    printf("Suma : %d\n",a+b);
    printf("Resta : %d\n",a-b);
    printf("Producto : %d\n",a*b);
    
    printf("Cociente : %f\n",(float)a/(float)b);
    printf("Resto : %d\n",a%b);
    
    printf("a+b ** : %d\n",a+(++b));
    
    a++;
    printf("a++ : %d\n",++a);
    b--;
    printf("b-- : %d\n",--b);
    
    a+=10;    
    printf("a : %d\n",a);
    b*=100;    
    printf("b : %d\n",b); 
     
}

