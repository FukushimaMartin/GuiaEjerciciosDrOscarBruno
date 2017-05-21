#include <iostream>

/*
MI-14: Dados 50 números enteros, informar el promedio de los mayores que 100 y 
la suma de los menores que –10.
Federico Martin Fukushima
21/05/2017
*/

int main() {

    int n, c1=0, summenor=0;
    float p=0, summayor=0;
    
    for (unsigned i=0; i<50; i++) {
        std::cout<<"ingrese el "<<i+1<<" numero\n";
        std::cin>>n;
        if (n>100) {
                  summayor += n;
                  c1++;
                  }
        if (n < -10) {
              summenor += n;
              }
        }
    if (c1 != 0) {
           p = summayor / c1;
           std::cout<<"el promedio de los mayores que 100 es: "<<p;
           } else {
                  std::cout<<"No se ingresaron numeros mayores que 100";
                  }
    std::cout<<"\nla suma de los numeros menores que -10 es: "<<summenor;
}
