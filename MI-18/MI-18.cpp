#include <iostream>

/*
MI-18:	Dado un valor M determinar y emitir un listado con los M primeros múltiplos de
		3 que no lo sean de 5, dentro del conjunto de los números naturales
Federico Martin Fukushima
10/06/2017
*/

int main() {
	unsigned m, c=0, cont=0;
	
	std::cout<<"\tIngrese un numero entero mayor a cero\n";
	std::cin>>m;
	
	
	do{
		++cont;
		if ((cont % 3 == 0) and (cont % 5 != 0)){
			++c;
			std::cout<<"\n"<<c<<") multiplo de 3 (y no de 5) es: "<<cont;
		}
	} while (c < m);
}
