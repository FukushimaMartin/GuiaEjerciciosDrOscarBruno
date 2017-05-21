#include <iostream>

/*
MI-13: Dados N y M números naturales, informar su producto por sumas sucesivas.
Federico Martin Fukushima
21/05/2017
*/

int main() {
    unsigned n, m;
    int p = 0;
    
    std::cout<<"Ingrese 2 numeros naturales\n";
    std::cin>>n>>m;
    
    for (int i=0; i<m; i++) {
        p += n;
        }
    std::cout<<p;
}
