#include <iostream>

/*
MI-4: A partir de un valor entero ingresado por teclado, se pide informar:
      a) La quinta parte de dicho valor
      b) El resto de la división por 5
      c) La séptima parte del resultado del punto a)
Federico Martin Fukushima
17/05/2017
*/

int main() {
 
 int num;
 float rest1;
 float rest2;
 
 std::cout<<"ingrese un numero entero\n";
 std::cin>>num;
 
 rest1 = num;
 rest1 = rest1/5;
 rest2 = rest1/7;
 
 std::cout<<"\nLa quinta parte de "<<num<<" es: "<<rest1;
 std::cout<<"\nEl resto de dividir "<<num<<" por 5 es: "<<num%5;
 std::cout<<"\nLa septima parte de "<<rest1<<" es: "<<rest2;
 
}
