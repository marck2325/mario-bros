#include <iostream>
#include<porcentaje.hpp>
int main(){
    porcentaje foco1;
    porcentaje foco2;
    porcentaje foco3;

    foco1.Incrementar(10);
    foco1.Incrementar(10);
    foco1.Disminuir(4);
    std::cout<<"Foco 1 :"<<foco1.Imprimir()<<std::endl;
}