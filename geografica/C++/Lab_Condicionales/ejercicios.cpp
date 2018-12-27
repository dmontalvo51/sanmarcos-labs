#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

void ejercicio1(){
     printf("### Ejercicio 1. ###\n\n");
     float a,b,c,r;
     cout<<"Lados del triangulo. A : ";cin>>a;cout<<"B :";cin>>b;cout<<"C :";cin>>c;
     cout<<"Radio : ";cin>>r;

     printf("El area del triangulo en funcion a \n");
     printf("a=%.2f, b=%.2f, c=%.2f y r=%.2f es %.2f",a,b,c,r,r*(a+b+c)/2);
}

void ejercicio2(){
     printf("### Ejercicio 2. ###\n\n");

     int a1,a2,b1,b2,c1,c2;
     float a,b,c;

     cout<<"A(x) : ";cin>>a1;
     cout<<"A(y) : ";cin>>a2;
     cout<<"B(x) : ";cin>>b1;
     cout<<"B(y) : ";cin>>b2;
     cout<<"C(x) : ";cin>>c1;
     cout<<"C(y) : ";cin>>c2;

     a=sqrt(pow(a1-c1,2)+pow(a2-c2,2));
     b=sqrt(pow(a1-b1,2)+pow(a2-b2,2));
     c=sqrt(pow(b1-c1,2)+pow(b2-c2,2));
     printf("Lado a : %f, Lado b : %f , Lado c : %f \n",a,b,c);

     float p,area;

     p=a+b+c;

     area = sqrt(p/2*(p/2-a)*(p/2-b)*(p/2-c));
     printf("Perimetro = %f \n",p);
     printf("Area = %f \n",area);

}


void ejercicio3(){
     printf("### Ejercicio 3. ###\n\n");
     int n,suma,n2;
     cout<<"Ingrese N (3 cifras): ";cin>>n;
     n2=(n%10)*100+(n%100/10)*10+n/100;
     suma=n%10+n/100;

     cout<<"N invertido : "<<n2<<endl;
     cout<<"Suma digitos extremos :"<<suma;

}

void ejercicio4(){
     printf("### Ejercicio 4. ###\n\n");
     float v,r,tiempo,cir;
     cout<<"Ingrese velocidad en m/s: ";cin>>v;
     cout<<"Ingrese radio de circ. de la pista(en metros): ";cin>>r;
     cir=2*3.1416*r;
     tiempo=2*cir/v + (60*2)*((int)cir/1000); //Usar  () para dar prioridad a la / sobre la *

     printf("La pista mide %f metros\n",cir);
     printf("Tiempo en segundos que tarda el atleta en dar 2 vueltas (descansando 1 min c/1000 metros) : %f",tiempo);

}

void ejercicio5(){
     printf("### Ejercicio 5. ###\n\n");
     //1 dolar 3.52 soles, 1 dolar = 2.08 marcos, 1 dolar =1.07 euros
     float soles,dolares,marcos;
     float salud=0.6,ninos=0.3,admin=0.1;

     cout<<"Ingrese donación en soles: ";cin>>soles;
     cout<<"Ingrese donación en dólares: ";cin>>dolares;
     cout<<"Ingrese donación en marcos: ";cin>>marcos;

     float total=(soles/3.52)*1.07+(marcos/2.08)*1.07+dolares*1.07;


     printf("El total de la donacion es de  %f euros\n",total);
     printf("Centro de salud : %f euros\n",salud*total);
     printf("Comedor de niños : %f euros\n",ninos*total);
     printf("Gastos administrativos : %f euros\n",admin*total);

}

void ejercicio6(){
     printf("### Ejercicio 6. ###\n\n");

     int minutos,s_minutos=60;
     int horas,s_horas=60*s_minutos;
     int dias,s_dias=24*s_horas;
     int segundos,segundos_original;
     cout<<"Ingrese un valor en segundos: ";cin>>segundos;
     segundos_original=segundos;

     dias=segundos/s_dias;
     segundos=segundos%s_dias;

     horas=segundos/s_horas;
     segundos=segundos%s_horas;
     minutos=segundos/s_minutos;
     segundos=segundos%s_minutos;

    printf("%d segundos es equivalente a %d dias, %d horas, %d minutos y %d segundos.",segundos_original,dias,horas,minutos,segundos);

}


void ejercicio7(){
     printf("### Ejercicio 7. ###\n\n");
     int hora1,minuto1,minuto2,segundos2;

     cout<<"(1) HH:MM"<<endl;
     cout<<"HH : ";cin>>hora1;
     cout<<"MM : ";cin>>minuto1;

     cout<<"(2) MM:SS"<<endl;
     cout<<"MM : ";cin>>minuto2;
     cout<<"SS : ";cin>>segundos2;

     int hora=0,minuto=0,segundos=0;

     //TODO Considerar que se ingresen mas de 60 segundos
     if(segundos2>59){
       minuto=minuto+segundos2/60;
       segundos=segundos2%60;
     }else{
        segundos=segundos2;
     }

     minuto=minuto+minuto1+minuto2;

     if(minuto>59){
        hora+=minuto/60;
        minuto=minuto%60;
     }

     hora+=hora1;
     printf("SUMA : %02d:%02d:%02d",hora,minuto,segundos);

}
void ejercicio8(){
     printf("### Ejercicio 8. ###\n\n");
    int edad1,edad2,edad3;
    cout<<"Ingrese edad 1 :";cin>>edad1;
    cout<<"Ingrese edad 2 :";cin>>edad2;
    cout<<"Ingrese edad 3 :";cin>>edad3;

    //Edad1 menor, edad2 media, edad3 mayor

    int aux;

    if(edad1>edad2){
        aux=edad2;
        edad2=edad1;
        edad1=aux;
    }

    if(edad2>edad3){
       aux=edad3;
       edad3=edad2;
       edad2=aux;
    }

    if(edad1>edad2){
        aux=edad2;
        edad2=edad1;
        edad1=aux;
    }

    printf("Edad mayor = %d\n",edad3);
    printf("Edad menor = %d\n",edad1);
    printf("Edad media = %d\n",edad2);


}

void ejercicio9(){
     printf("### Ejercicio 9. ###\n\n");
     float distancia,dias_estancia;

     cout<<"Ingrese distancia a destino en KM : ";cin>>distancia;
     cout<<"Ingrese dias de estancia: ";cin>>dias_estancia;

     float precio = 0.15*2*distancia;

     if(dias_estancia>10 && distancia*2>300){
        precio=precio*0.7;
     }
     printf("Precio Ida y vuelta = $ %.2f",precio);

}
void ejercicio10(){
     printf("### Ejercicio 10. ###\n");
     printf("En este ejercicio complicamos las cosas. El descuendo adicional se aplica sobre el saldo no descontado \n\n");

     float sueldo;
     cout<<"Ingrese sueldo: ";cin>>sueldo;
     float descuento;
     if(sueldo<=1000.0){
        descuento=sueldo*0.1;
     }else if(sueldo<=2000){
        descuento=sueldo*0.1+sueldo*0.9*0.05;
     }else{
        descuento=sueldo*0.1+sueldo*0.9*0.05+sueldo*0.9*0.95*0.03;
     }
     sueldo-=descuento;

     printf("Descuento : S/ %.2f . Suedo neto : S/ %.2f",descuento,sueldo);
}

void ejercicio11(){
    printf("### Ejercicio 11. ###\n\n");
    float salario;
    int tiempo;

    cout<<"Salario? : ";cin>>salario;
    cout<<"Antiguedad? : ";cin>>tiempo;

    float fraccion;

    if(tiempo<1){
       fraccion=0.05;
    }else if(tiempo<2){
        fraccion=0.07;
    }else if(tiempo<5){
        fraccion=0.10;
    }else if(tiempo<10){
        fraccion=0.15;
    }else{
        fraccion=0.2;
    }

    printf("Utilidades recibidas : S/ %.2f",salario*fraccion);
}

void ejercicio12(){
     printf(" ### Ejercicio 12. ###\n\n");
     cout<<"Jubilados"<<endl;
     int edad,antiguedad;

     cout<<"Ingrese edad :";cin>>edad;
     cout<<"Ingrese antigüedad :";cin>>antiguedad;

     /*
     En este problema son 4 casos posibles.

     - Jubilacion por edad: Si edad >= 60 y antiguedad < 25
     - Jubilacion por antiguedad joven: Si edad < 60 y antiguedad >= 25
     - Jubilacion por antiguedad adulta: Si edad >= 60 y antiguedad >= 25
     - No se jubila: Si edad < 60 y antiguedad < 25

     */

     if(edad>=60){
         if(antiguedad<25)
           cout<<"Jubilacion por edad"<<endl;
         else
           cout<<"Jubilacion por antiguedad adulta"<<endl;
     }else{
         if(antiguedad>=25)
              cout<<"Jubilacion por antiguedad joven"<<endl;
         else
             cout<<"No te corresponde jubilación. Sigue trabajando nomas!!!"<<endl;
     }
}

// 10,10,10 Empate triple
// 15,10,10 Empate doble menores
// 20 5 5 gana 20
// 20,23,18 segunda vuelta dos mayores
// 19 12 7 segunda vuelta dos mayores
// 20 5 10 gana 20
void ejercicio13_1(){
     printf(" ### Ejercicio 13. (Version 1 - Ordenamiento) ###\n\n");
     int pedro,juan,maria;
     int a,b,c;
     int ganador=0,total;

     cout<<"Ingresar votos de Pedro : ",cin>>pedro;
     cout<<"Ingresar votos de Juan : ",cin>>juan;
     cout<<"Ingresar votos de Maria : ",cin>>maria;

     a=pedro;b=juan;c=maria;
     total=pedro+juan+maria;
     printf("Puntaje requerido para ganar la elección : %d\n",total/2+1);

     //ordenar los puntajes
    int aux;
    if(a>b){
        aux=b;b=a;a=aux;
    }
    if(b>c){
       aux=c;c=b;b=aux;
    }
    if(a>b){
        aux=b;b=a;a=aux;
    }

    //Detectando si el mayor obtuvo el puntaje necesario
    if(c>=total/2+1){
       if(c==pedro){
           printf("El ganador es Pedro!\n");
       }else if(c==maria){
           printf("La ganadora es María!\n");
       }else{
           printf("El ganador es Juan!\n");
       }
    }else{
      if(a==b && b==c){
           printf("Segunda vuelta con los 3 candidatos por empate triple!\n");
      }else if(a==b){
           printf("Segunda vuelta con los 3 candidatos por empate de los dos menores!\n");
      }else{
            printf("Segunda vuelta con los 2 candidatos mayores\n");
            //Aqui se puede buscarquien es c y b para mostrar los nombres
      }
    }
}

void ejercicio13_2(){
     printf(" ### Ejercicio 13. (Version 2 - Condicionales Anidados)###\n\n");
     int pedro,juan,maria,total;
     cout<<"Ingresar votos de Pedro : ",cin>>pedro;
     cout<<"Ingresar votos de Juan : ",cin>>juan;
     cout<<"Ingresar votos de Maria : ",cin>>maria;
     total=pedro+juan+maria;

     if(pedro>=total/2+1 || juan>=total/2+1 || maria>=total/2+1){
        //Si Pedro o Juan o Maria tienen 50% +1 de los votos. Encontrar al ganador
        if(pedro>=total/2+1){
            cout<<"El ganador es Pedro!"<<endl;
        }else if(juan>=total/2+1){
            cout<<"El ganador es Juan!"<<endl;
        }else{
            cout<<"La ganadora es María!"<<endl;
        }
     }else{
        //Ninguno gano con el 50% + 1 . Segunda vuelta
        if(pedro==juan && juan==maria){
            cout<<"Segunda vuelta con los 3 candidatos por empate triple!"<<endl;
        }else if(pedro==juan && pedro<maria){
            cout<<"Segunda vuelta con los 3 candidatos por empate de los dos menores!"<<endl;
        }else if(pedro==maria && pedro<juan){
            cout<<"Segunda vuelta con los 3 candidatos por empate de los dos menores!"<<endl;
        }else if(maria==juan && maria<pedro){
            cout<<"Segunda vuelta con los 3 candidatos por empate de los dos menores!"<<endl;
        }else{
           cout<<"Segunda vuelta con los 2 candidatos mayores"<<endl;
        }
     }
}

void ejercicio14(){
    printf(" ### Ejercicio 14. ###\n\n");
    int n,pagoPorHora;
    cout<<"Ingrese cantidad de horas extra : ",cin>>n;
    cout<<"Ingrese pago por hora : "<<endl;cin>>pagoPorHora;
    int pago=0,extras=0;

    if(n>40){
        extras=n-40;
        if(extras<=8){
            pago+=extras*2*pagoPorHora;
        }else{
            pago=pago+8*2*pagoPorHora+(extras-8)*3*pagoPorHora;
        }
        pago=pago+40*pagoPorHora;
    }else{
      printf("No se realizaron horas extra\n");
      pago=n*pagoPorHora;
    }

    printf("El pago es S/ %d\n",pago);

}

void ejercicio15(){
     printf(" ### Ejercicio 15. ###\n\n");
     int year;
     cout<<"Ingrese el año : ",cin>>year;
     if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                printf("Bisiesto");
            }else{
                printf("No es Bisiesto");
            }
        }else{
                printf("Bisiesto");
        }
     }else{
        printf("No es Bisiesto");
     }

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

     float aereo=0.0,maritimo=0.0,terrestre=0.0;

     float toneladas;
     char perecible;

     printf("....Iniciando orden de compra....\n");
     printf(".................................\n");
     printf("1. Cargas al NORTE\n");
     printf("Toneladas por transporte AÉREO : ");cin>>toneladas;
     printf("Perecibles?(s/n) :");cin>>perecible;
     if(perecible=='s'){
        aereo=aereo+30*toneladas*1.07;
     }else{
        aereo=aereo+30*toneladas;
     }
     printf("Toneladas por transporte MARÍTIMO : ");cin>>toneladas;
     printf("Perecibles?(s/n) :");cin>>perecible;
     if(perecible=='s'){
        maritimo=maritimo+25*toneladas*1.07;
     }else{
        maritimo=maritimo+25*toneladas;
     }
     printf("Toneladas por transporte TERRESTRE : ");cin>>toneladas;
     printf("Perecibles?(s/n) :");cin>>perecible;
     if(perecible=='s'){
        terrestre=terrestre+20*toneladas*1.07;
     }else{
        terrestre=terrestre+20*toneladas;
     }

     printf(".................................\n");
     printf("1. Cargas al SUR\n");
     printf("Toneladas por transporte AÉREO : ");cin>>toneladas;
     printf("Perecibles?(s/n) :");cin>>perecible;
     if(perecible=='s'){
        aereo=aereo+25*toneladas*1.07;
     }else{
        aereo=aereo+25*toneladas;
     }
     printf("Toneladas por transporte MARÍTIMO : ");cin>>toneladas;
     printf("Perecibles?(s/n) :");cin>>perecible;
     if(perecible=='s'){
        maritimo=maritimo+20*toneladas*1.07;
     }else{
        maritimo=maritimo+20*toneladas;
     }
     printf("Toneladas por transporte TERRESTRE : ");cin>>toneladas;
     printf("Perecibles?(s/n) :");cin>>perecible;
     if(perecible=='s'){
        terrestre=terrestre+15*toneladas*1.07;
     }else{
        terrestre=terrestre+15*toneladas;
     }

     printf(".................................\n");
     printf("1. Cargas al CENTRO\n");
     printf("Toneladas por transporte AÉREO : ");cin>>toneladas;
     printf("Perecibles?(s/n) :");cin>>perecible;
     if(perecible=='s'){
        aereo=aereo+20*toneladas*1.07;
     }else{
        aereo=aereo+20*toneladas;
     }
     printf("Toneladas por transporte MARÍTIMO : ");cin>>toneladas;
     printf("Perecibles?(s/n) :");cin>>perecible;
     if(perecible=='s'){
        maritimo=maritimo+15*toneladas*1.07;
     }else{
        maritimo=maritimo+15*toneladas;
     }
     printf("Toneladas por transporte TERRESTRE : ");cin>>toneladas;
     printf("Perecibles?(s/n) :");cin>>perecible;
     if(perecible=='s'){
        terrestre=terrestre+10*toneladas*1.07;
     }else{
        terrestre=terrestre+10*toneladas;
     }

     printf("Monto a pagar\n");
     printf("Aéreo : $ %.2f, Marítimo : $ %.2f, Terrestre : $ %.2f\n",aereo,maritimo,terrestre);
     printf("Total : $ %.2f\n",aereo+maritimo+terrestre);


}





