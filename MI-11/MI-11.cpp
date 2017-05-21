#include <iostream>

/*
MI-11: Se ingresa una edad, mostrar por pantalla alguna de las siguientes leyendas:
    æ 'menor' si la edad es menor o igual a 12
    æ 'cadete' si la edad esta comprendida entre 13 y 18
    æ 'juvenil' si la edad es mayor que 18 y no supera los 26
    æ 'mayor' en el caso que no cumpla ninguna de las condiciones anteriores
Federico Martin Fukushima
21/05/2017
*/

int main() {
    unsigned edad;
    
    std::cout<<"ingrese una edad\n";
    std::cin>>edad;
    
    if (edad <= 12) {
             std::cout<<"'menor'";
             return 0;
             }
    if (edad >= 13 && edad <= 18){
             std::cout<<"'cadete'";
             return 0;
             }
    if (edad > 18 && edad <= 26){
             std::cout<<"'juvenil'";
             } else {
                    std::cout<<"'mayor'";
                    }
}
