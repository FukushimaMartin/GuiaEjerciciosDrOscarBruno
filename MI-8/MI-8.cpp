#include <iostream>

/*
MI-8: Dado un triángulo representado por sus lados L1, L2, L3, determinar e 
      imprimir una leyenda según sea: equilátero, isósceles o escálenos.
Federico Martin Fukushima
21/05/2017
*/

int main() {
    float l1, l2, l3;
    
    std::cout<<"ingrese los valores de cada lado del triangulo, seguidos de la tecla enter\n";
    std::cin>>l1>>l2>>l3;
    
    if (l1 == l2 && l1 == l3) {
           std::cout<<"es equilatero";
           } else {
                  if (l1 == l2 || l1 == l3 || l2 == l3){
                         std::cout<<"es isosceles";
                         } else {
                                std::cout<<"es escaleno";
                                }
                  }
}
