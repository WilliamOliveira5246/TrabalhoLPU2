#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include "pessoa.hpp"

class Funcionario : public Pessoa
{
private:
    std::string matricula;
    float salario;
    std::string departamento;
    int cargaHoraria;
    std::string dataIngresso;

public:
    Funcionario
    (
        std::string matricula, float salario, std::string departamento, int cargaHoraria, 
        std::string dataIngresso, std::string nome, std::string cpf, std::string dataNascimento,
        std::string genero, std::string rua, int numero, std::string bairro, std::string cidade, 
        std::string cep
    );

    std::string getMatricula();
    void setMatricula(std::string novaMatricula);

    float getSalario();
    void setSalario(float novoSalario);

    std::string getDepartamento();
    void setDepartamento(std::string novoDepartamento);

    int getCargaHoraria();
    void setCargaHoraria(int novaCargaHoraria);

    std::string getDataIngresso();
    void setDataIngresso(std::string novaDataIngresso);
};

#endif