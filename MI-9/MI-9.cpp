#include <iostream>

/*
MI-9: Dados un mes y el año correspondiente informar cuantos días tiene el mes.
Federico Martin Fukushima
10/06/2017
*/

int main(){
	unsigned m;
	unsigned a;
	
	std::cout<<"\tIngrese un valor entre 1 y 12 que represente un mes\n";
	std::cin>>m;
	std::cout<<"\tIngrese un valor distinto de cero que represente un anio\n";
	std::cin>>a;
	
	switch(m){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			std::cout<<"la cantidad de dias del mes "<<m<<" es de: 31\n";
			break;
		case 4: case 6: case 9: case 11:
			std::cout<<"la cantidad de dias del mes "<<m<<" es de: 30\n";
			break;
		case 2:
			if ((a%4 == 0) and (a%100 != 0)){
				std::cout<<"la cantidad de dias del mes "<<m<<" correspondiente al anio bisiesto "<<a<<" es de: 29\n";
			} else if(a%400 == 0){
				std::cout<<"la cantidad de dias del mes "<<m<<" correspondiente al anio bisiesto "<<a<<" es de: 29\n";
			} else {
				std::cout<<"la cantidad de dias del mes "<<m<<" correspondiente al anio "<<a<<" es de: 28\n";
			}
			break;
		default:
			std::cout<<"Los datos ingresados son incorrectos";
	}
}
