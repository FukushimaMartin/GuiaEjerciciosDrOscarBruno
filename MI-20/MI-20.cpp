#include <iostream>

/*
MI-20:	Dados 10 valores informar el mayor.
Federico Martin Fukushima
10/06/2017
*/

int main() {
	int mayor, num;
	std::cout<<"\t Dado 10 valores, se informara por pantalla el mayor de ellos\n\n";
	
	for (unsigned i=0; i<10; i++){
		switch (i){
			case 0: 
				std::cout<<"Ingrese el 1er numero\n";
				std::cin>>num;
				mayor = num;
				break;
			default:
				std::cout<<"ingrese el "<<i+1<<"o numero\n";
				std::cin>>num;
				if (num > mayor){
					mayor = num;
				}
				break;
		}
	}
	std::cout<<"El mayor de los 10 numeros es: "<<mayor;
}
