#include <iostream>

/*
MI-15: Se realiza una inspección en una fábrica de pinturas, y se detectaron 20 infracciones. 
       De cada infracción se tomó nota de los siguientes datos:
      - Tipo de Infracción (1, 2, 3, ó 4)
      - Motivo de la infracción
      - Valor de la multa
      - Gravedad de la infracción (‘L’,‘M’, ‘G’)
      Se pide informar al final del proceso:
        Los valores totales de la multa a pagar de acuerdo al tipo de gravedad.
        La leyenda “Clausurar fábrica” si la cantidad de infracciones 3 y 4 con gravedad “G” sean mayor a 3.
Federico Martin Fukushima
31/05/2017
*/

int main() {
  unsigned tipo;
  float multa;
  char gravedad;
  float leve=0, medio=0, grave=0;
  int clausura=0;

  for (unsigned i=0; i<20; i++){
  	std::cout<<i+1;
    std::cout<<"\nIngrese el Tipo de infraccion (1, 2, 3 o 4): \n";
    std::cin>>tipo;
    std::cout<<"\nIngrese el valor de la Multa: \n";
    std::cin>>multa;
    std::cout<<"\nIngrese el tipo de Gravedad ('L', 'M', 'G'): \n";
    std::cin>>gravedad;
    switch (gravedad){
    	case 'L':
        	leve = leve + multa;
        	break;
      	case 'M':
        	medio = medio + multa;
        	break;
      	case 'G':
        	grave = grave + multa;
        	if (tipo == 3 || tipo == 4){
        		clausura++;
         	}
        	break;
      	default:
        	std::cout<<"\n tipo de gravedad no existente";
        	break;
    	}
    std::cout<<"\n\n";
	}
	std::cout<<"\nEl total de la multa a pagar para el tipo de gravedad L es: "<<leve;
	std::cout<<"\nEl total de la multa a pagar para el tipo de gravedad M es: "<<medio;
	std::cout<<"\nEl total de la multa a pagar para el tipo de gravedad G es: "<<grave;
  
	if (clausura >= 3){
		std::cout<<"\n\n ****CLAUSURAR FABRICA!!****";
    }
}
