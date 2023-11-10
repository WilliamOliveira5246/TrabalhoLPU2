#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>

#include <string>

class Funcionario
{
private:
    std::string matricula;
    float salario;
    std::string departamento;
    int cargaHoraria;
    std::string dataIngresso;

public:
    Funcionario(std::string matricula, float salario, std::string departamento, int cargaHoraria, std::string dataIngresso);

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