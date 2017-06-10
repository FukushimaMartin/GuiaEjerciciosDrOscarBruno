#include <iostream>

/*
MI-6: Dadas dos fechas informar cual es la más reciente. Determine cuales serían los
      datos de entrada y las leyendas a informar de acuerdo al proceso solicitado. 
Federico Martin Fukushima
17/05/2017
*/

int main() {
    
    unsigned dia1, mes1, anio1, dia2, mes2, anio2;
    
    std::cout<<"\tIngrese una fecha en el siguiente orden (dia -> mes -> anio)\n";
    std::cout<<"seguido, cada valor, por la tecla Enter\n";
    std::cin>>dia1>>mes1>>anio1;
    
    std::cout<<"\tIngrese otra fecha en el siguiente orden (dia -> mes -> anio)\n";
    std::cout<<"seguido, cada valor, por la tecla Enter\n";
    std::cin>>dia2>>mes2>>anio2;
    
    unsigned fecha1 = anio1*10000+mes1*100+dia1;
    unsigned fecha2 = anio2*10000+mes2*100+dia2;
    
    std::cout<<"Dada las fechas: "<<dia1<<"/"<<mes1<<"/"<<anio1<<" y "<<dia2<<"/"<<mes2<<"/"<<anio2;
    if (fecha1 > fecha2) {
               std::cout<<"\nLa fecha mas reciente es: ";
               std::cout<<dia1<<"/"<<mes1<<"/"<<anio1;
    } else {
           if (fecha1 < fecha2) {
                      std::cout<<"\nLa fecha mas reciente es: ";
                      std::cout<<dia2<<"/"<<mes2<<"/"<<anio2;
           } else {
                  std::cout<<"\nAmbas fechas son iguales";
           }
    }
}
