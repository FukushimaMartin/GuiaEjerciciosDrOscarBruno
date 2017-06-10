#include <iostream>

/*
MI-2: Dada una terna de números naturales que representan al día, al mes y al año de una
      determinada fecha informarla como un solo número natural de 8 dígitos con la forma
      AAAAMMDD).
Federico Martin Fukushima
17/05/2017
*/

int main(){
    int anio;
    int mes;
    int dia;
    
    std::cout<<"Ingrese el anio\n";
    std::cin>>anio;
    std::cout<<"Ingrese el mes\n";
    std::cin>>mes;
    std::cout<<"Ingrese el dia\n";
    std::cin>>dia;
    
    
    std::cout<<"***dada la terna "<<dia<<"/"<<mes<<"/"<<anio<<"***\n";
    std::cout<<"la expresaremos a continuacion como un solo numero de 8 digitos\n";
    std::cout<<anio*10000+mes*100+dia;
    
}
