#ifndef TECNICOADM_HPP
#define TECNICOADM_HPP

#include<iostream>
#include"funcionario.hpp"

class TecnicoADM : public Funcionario
{
private:
    float adicionalProdutividade = 0.25;
    std::string funcaoDesempenhada;
public:
    TecnicoADM();
    TecnicoADM
    (
        float adicionalProdutividade, std::string funcaoDesempenhada,
        std::string matricula, float salario, std::string departamento, int cargaHoraria, 
        std::string dataIngresso, std::string nome, std::string cpf, std::string dataNascimento,
        std::string genero, std::string rua, int numero, std::string bairro, std::string cidade, 
        std::string cep
    );

    float getAdicionalProdutividade();
    void setAdicionalProdutividade(float adicionalProdutividade);

    std::string getFuncaoDesempenhada();
    void setFuncaoDesempenhada(std::string funcaoDesempenhada);
};

#endif