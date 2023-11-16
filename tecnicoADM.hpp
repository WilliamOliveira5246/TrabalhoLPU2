#ifndef TECNICOADM_HPP
#define TECNICOADM_HPP

#include<iostream>

class TecnicoADM{
private:
    float adicionalProdutividade = 0.25;
    std::string funcaoDesempenhada;
public:
    TecnicoADM(float adicionalProdutividade, std::string funcaoDesempenhada);

    float getAdicionalProdutividade();
    void setAdicionalProdutividade(float adicionalProdutividade);

    std::string getFuncaoDesempenhada();
    void setFuncaoDesempenhada(std::string funcaoDesempenhada);
};

#endif