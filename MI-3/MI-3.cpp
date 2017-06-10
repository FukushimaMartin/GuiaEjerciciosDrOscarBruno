#include <iostream>

/*
MI-3: Dada un numero entero de la forma (AAAAMMDD), que representa una fecha
      valida mostrar el dia, mes y año que representa. 
Federico Martin Fukushima
17/05/2017
*/

int main(){
    
    int anio = 0;
    int mes = 0;
    int dia = 0;
    
    int fecha;
    
    std::cout<<"Ingrese un numero de 8 digitos que represente una fecha\n";
    std::cin>>fecha;
    
    std::cout<<"Dado el numero "<<fecha<<" lo representaremos como dia, mes y anio por separado\n";
    
    anio = fecha/10000;
    mes = (fecha-(anio*10000))/100;
    dia = fecha-(anio*10000)-(mes*100);
    
    std::cout<<"el dia es: "<<dia<<"\n";
    std::cout<<"el mes es: "<<mes<<"\n";
    std::cout<<"el anio es: "<<anio<<"\n";
        
}
