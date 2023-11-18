#include <iostream>
#include "tecnicoADM.hpp"

using namespace std;

TecnicoADM::TecnicoADM(float adicionalProdutividade, string funcaoDesempenhada):
        adicionalProdutividade(adicionalProdutividade), funcaoDesempenhada(funcaoDesempenhada){}

float TecnicoADM::getAdicionalProdutividade(){
    return adicionalProdutividade;
}
void TecnicoADM::setAdicionalProdutividade(float novoAdicionalProdutividade){
    adicionalProdutividade = novoAdicionalProdutividade;
}

string TecnicoADM::getFuncaoDesempenhada(){
    return funcaoDesempenhada;
}
void TecnicoADM::setFuncaoDesempenhada(std::string novaFuncaoDesempenhada){
    funcaoDesempenhada = novaFuncaoDesempenhada;
}