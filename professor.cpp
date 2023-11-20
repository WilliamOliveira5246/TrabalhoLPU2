#include <iostream>
#include "professor.hpp"

using namespace std;

Professor::Professor
(
    Nivel nivelProfessor, Formacao formacaoProfessor, string disciplina,
    string matricula, float salario, string departamento, int cargaHoraria, 
    string dataIngresso, string nome, string cpf, string dataNascimento,
    string genero, string rua, int numero, string bairro, string cidade, 
    string cep
) : 
Funcionario(
    matricula, salario, departamento, cargaHoraria, 
    dataIngresso, nome, cpf, dataNascimento,
    genero, rua, numero, bairro, cidade, cep
),
nivelProfessor(nivelProfessor), formacaoProfessor(formacaoProfessor), disciplina(disciplina){}

Nivel Professor::getNivel()
{
    return nivelProfessor;
}
void Professor::setNivel(Nivel novoNivelProfessor)
{
    nivelProfessor = novoNivelProfessor;
}

Formacao Professor::getFormacao()
{
    return formacaoProfessor;
}
void Professor::setFormacao(Formacao novaFormacaoProfessor)
{
    formacaoProfessor = novaFormacaoProfessor;
}

string Professor::getDisciplina()
{
    return disciplina;
}
void Professor::setDisciplina(std::string novaDisciplina)
{
    disciplina = novaDisciplina;
}

Nivel stringToNivel(std::string nivelStr){
    if (nivelStr == "I") {
        return Nivel::I;
    } else if (nivelStr == "II") {
        return Nivel::II;
    } else if (nivelStr == "III") {
        return Nivel::III;
    } else if (nivelStr == "IV") {
        return Nivel::IV;
    } else if (nivelStr == "V") {
        return Nivel::V;
    } else if (nivelStr == "VI") {
        return Nivel::VI;
    } else if (nivelStr == "VII") {
        return Nivel::VII;
    } else if (nivelStr == "VIII") {
        return Nivel::VIII;
    } else {
        throw std::invalid_argument("Valor de string inválido para Nivel");
    }
}

Formacao stringToFormacao(std::string formacaoStr){
    if (formacaoStr == "ESPECIALIZACAO") {
        return Formacao::ESPECIALIZACAO;
    } else if (formacaoStr == "MESTRADO") {
        return Formacao::MESTRADO;
    } else if (formacaoStr == "DOUTORADO") {
        return Formacao::DOUTORADO;
    } else {
        throw std::invalid_argument("Valor de string inválido para Formacao");
    }
}