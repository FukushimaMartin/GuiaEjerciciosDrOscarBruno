#include <iostream>

/*
MI-5: Dados dos valores enteros y distintos, emitir una leyenda apropiada que informe cuál es el
      mayor entre ellos.
Federico Martin Fukushima
17/05/2017
*/

int main(){
    int a, b;
    
    std::cout<<"ingrese dos valores enteros y distintos\n";
    std::cin>>a>>b;
    
    std::cout<<"\nEl mayor de los dos es: ";
    if(a>b){
            std::cout<<a;
    } else {
            if(b>a){
                    std::cout<<b;
            } else {
                    std::cout<<"NINGUNO, Ambos numeros son iguales";
            }
    }
}
