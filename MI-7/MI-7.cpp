#include <iostream>

/*
MI-7: Dado tres valores determinar e imprimir una leyenda según sea: “Forman 
      triangulo” o “No forman triangulo”.
Federico Martin Fukushima
21/05/2017
*/

int main() {
    float a, b, c;
    
    std::cout<<"Ingrese 3 valores seguidos de la tecla enter\n";
    std::cin>>a>>b>>c;
    
    if (a+b+c == 180) {
              std::cout<<"Forman triangulo";
              } else {
                     std::cout<<"No forman triangulo";
                     }
}
