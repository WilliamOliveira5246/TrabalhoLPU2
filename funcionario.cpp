#include <iostream>
#include "funcionario.hpp"

using namespace std;

Funcionario::Funcionario(){};
Funcionario::Funcionario
(
    string matricula, float salario, string departamento, int cargaHoraria, 
    string dataIngresso, string nome, string cpf, string dataNascimento,
    string genero, string rua, int numero, string bairro, string cidade, 
    string cep
) : Pessoa(nome, cpf, dataNascimento, genero, rua, numero, bairro, cidade, cep),
    matricula(matricula), salario(salario), departamento(departamento), cargaHoraria(cargaHoraria), dataIngresso(dataIngresso) {}

string Funcionario::getMatricula()
{
    return matricula;
}

void Funcionario::setMatricula(string novaMatricula)
{
    matricula = novaMatricula;
}

float Funcionario::getSalario()
{
    return salario;
}

void Funcionario::setSalario(float novoSalario)
{
    salario = novoSalario;
}

string Funcionario::getDepartamento()
{
    return departamento;
}

void Funcionario::setDepartamento(string novoDepartamento)
{
    departamento = novoDepartamento;
}

int Funcionario::getCargaHoraria()
{
    return cargaHoraria;
}

void Funcionario::setCargaHoraria(int novaCargaHoraria)
{
    cargaHoraria = novaCargaHoraria;
}

string Funcionario::getDataIngresso()
{
    return dataIngresso;
}

void Funcionario::setDataIngresso(string novaDataIngresso)
{
    dataIngresso = novaDataIngresso;
}
