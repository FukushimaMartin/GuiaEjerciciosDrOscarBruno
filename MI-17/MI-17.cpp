#include <iostream>

/*
MI-17:	Se ingresa un conjunto de valores float, cada uno de los cuales representan el
	sueldo de un empleado, excepto el último valor que es cero e indica el fin del conjunto. 
	Se pide desarrollar un programa que determine e informe:
	a) Cuántos empleados ganan menos $1.520.
	b) Cuántos ganan $1.520 o más pero menos de $2.780.
	c) Cuántos ganan $2.780 o más pero menos de $5.999.
	d) Cuántos ganan $5.999 o más.
Federico Martin Fukushima
10/06/2017
*/

int main(){
	float sueldo;
	unsigned categoria1=0, categoria2=0, categoria3=0, categoria4=0;
	
	do {
		std::cout<<"\tIngrese el sueldo del empleado seguido de la tecla Enter\n";
		std::cin>>sueldo;
		if (sueldo == 0){
			break;
		}
		if (sueldo < 1520){
			categoria1 += 1;
		}
		if (sueldo >= 1520 and sueldo < 2780){
			categoria2 += 1;
		}
		if (sueldo >= 2780 and sueldo < 5999){
			categoria3 += 1;
		}
		if (sueldo >= 5999){
			categoria4 += 1;
		}
		
	} while (sueldo != 0);
	
	std::cout<<"\n\nLa cantidad de empleados que ganan menos de $1.520 es: "<<categoria1;
	std::cout<<"\nLa cantidad de empleados que ganan $1.520 o mas pero menos de $2.780 es: "<<categoria2;
	std::cout<<"\nLa cantidad de empleados que ganan $2.780 o mas pero menos de $5.999 es: "<<categoria3;
	std::cout<<"\nLa cantidad de empleados que ganan $5.999 o mas es: "<<categoria4;
}
