
#include <iostream>
#include<porcentaje.hpp>
#include<list>
using namespace std;
int main(){
    std::list<porcentaje>focos;
    porcentaje foco1;
    porcentaje foco2;
    porcentaje foco3;

    focos.emplace_back(foco1);
    focos.emplace_back(foco2);
    focos.emplace_back(foco3);

    for (auto &&f : focos)
    {
        f.Incrementar(10);
    }


    foco1.Incrementar(10);
    foco1.Incrementar(10);
    foco1.Disminuir(4);
    std::cout<<"Foco 1 :"<<foco1.Imprimir()<<std::endl;

}