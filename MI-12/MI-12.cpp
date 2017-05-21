#include <iostream>

/*
MI-12: Informar los primeros 100 números naturales y su sumatoria
Federico Martin Fukushima
21/05/2017
*/

int main() {
    unsigned suma;
    
    for (unsigned i=0; i<100; i++){
        std::cout<<i<<"\n";
        suma+=i;
        }
    std::cout<<"Sumatoria = "<<suma;
}
