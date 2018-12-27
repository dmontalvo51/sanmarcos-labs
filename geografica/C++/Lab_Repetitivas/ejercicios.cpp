#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <math.h>
using namespace std;

void ejercicio1(){
     printf("### Ejercicio 1. ###\n\n");
     int n,digitos=0,sumaPar=0,sumaImpar=0;

     cout<<"Ingrese N : ";cin>>n;

     int digito=0;
     while(n>0){
        digito=n%10;
        n=n/10;
        digitos++;
        if(digito%2==0)
            sumaPar+=digito;
        else
            sumaImpar+=digito;
     }

    printf("Digitos : %d. Suma Pares : %d. Suma Impares : %d",digitos,sumaPar,sumaImpar);


}

void ejercicio2(){
     printf("### Ejercicio 2. ###\n\n");

     int n;
     float pesoNinos=0.0,pesoJovenes=0.0,pesoAdultos=0.0,pesoViejos=0.0;
     int ninos=0,jovenes=0,adultos=0,viejos=0;

     cout<<"Ingrese cantidad de personas: ";cin>>n;

     for(int i=0;i<n;i++){
        int edad;float peso;
        cout<<"Ingrese edad : ";cin>>edad;
        cout<<"Ingrese peso : ";cin>>peso;

        if(edad>=0 && edad <=12){
            pesoNinos+=peso;
            ninos++;
        }else if(edad>=13 && edad<=29){
            pesoJovenes+=peso;
            jovenes++;
        }else if(edad>=30 && edad<=59){
            pesoAdultos+=peso;
            adultos++;
        }else{
            pesoViejos+=peso;
            viejos++;
        }
     }

     printf("CATEGORIA     PESO PROMEDIO\n");
     printf("Niños[0-12]     %.2f kg\n",pesoNinos/(float)ninos);
     printf("Jovenes[13-29]  %.2f kg\n",pesoJovenes/(float)jovenes);
     printf("Adultos[30-59]  %.2f kg\n",pesoAdultos/(float)adultos);
     printf("Viejos[60+]     %.2f kg\n",pesoViejos/(float)viejos);


}


void ejercicio3(){
     printf("### Ejercicio 3. ###\n\n");




}

void ejercicio4(){
     printf("### Ejercicio 4. ###\n\n");






}

void ejercicio5(){
     printf("### Ejercicio 5. ###\n\n");


}

void ejercicio6(){
     printf("### Ejercicio 6. ###\n\n");



}


void ejercicio7(){
     printf("### Ejercicio 7. ###\n\n");


}
void ejercicio8(){
     printf("### Ejercicio 8. ###\n\n");


}

void ejercicio9(){
     printf("### Ejercicio 9. ###\n\n");


}
void ejercicio10(){
     printf("### Ejercicio 10. ###\n\n");

}

void ejercicio11(){
     printf("### Ejercicio 11. ###\n\n");

}

void ejercicio12(){
     printf(" ### Ejercicio 12. ###\n\n");

}
void ejercicio13(){
     printf(" ### Ejercicio 13. ###\n\n");

}

void ejercicio14(){
     printf(" ### Ejercicio 14. ###\n\n");

}

void ejercicio15(){
     printf(" ### Ejercicio 15. ###\n\n");

}

void ejercicio16(){
     printf(" ### Ejercicio 16. ###\n\n");

}

void ejercicio17(){
     printf(" ### Ejercicio 17. ###\n\n");

}
void ejercicio18(){
     printf(" ### Ejercicio 18. ###\n\n");

}

void ejercicio19(){
     printf(" ### Ejercicio 19. ###\n\n");

}

void ejercicio20(){
     printf(" ### Ejercicio 20. ###\n\n");

}

void ejercicio21(){
     printf(" ### Ejercicio 21. ###\n\n");

}

void ejercicio22(){
     printf(" ### Ejercicio 22. ###\n\n");

}
