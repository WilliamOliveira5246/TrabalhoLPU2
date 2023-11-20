#include <iostream>
#include "tecnicoADM.hpp"

using namespace std;

TecnicoADM::TecnicoADM
(
    float adicionalProdutividade, string funcaoDesempenhada,
    string matricula, float salario, string departamento, int cargaHoraria, 
    string dataIngresso, string nome, string cpf, string dataNascimento,
    string genero, string rua, int numero, string bairro, string cidade, 
    string cep
) :
Funcionario
(
    matricula, salario, departamento, cargaHoraria, 
    dataIngresso, nome, cpf, dataNascimento,
    genero, rua, numero, bairro, cidade, cep
),
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
void TecnicoADM::setFuncaoDesempenhada(string novaFuncaoDesempenhada){
    funcaoDesempenhada = novaFuncaoDesempenhada;
}