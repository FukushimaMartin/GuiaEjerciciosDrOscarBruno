#include <iostream>

/*
MI-16: 	Ingresar e informar valores, mientras que el valor ingresado no sea negativo.
		Informar la cantidad de valores ingresados.
Federico Martin Fukushima
31/05/2017
*/

int main(){
	int a;
	unsigned cont;
	
	do {
		std::cout<<"Ingrese un valor\n";
		std::cin>>a;
		std::cout<<"ingreso el valor: "<<a<<"\n\n\n";
		++cont;
	} while (a >= 0);
	std::cout<<"\ncantidad de valores ingresados: "<<cont;
}
