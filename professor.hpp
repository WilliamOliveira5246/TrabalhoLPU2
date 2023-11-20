#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

#include <iostream>
#include "funcionario.hpp"

enum Nivel{
    I, II, III, IV, V, VI, VII, VIII
};

enum Formacao{
    ESPECIALIZACAO, MESTRADO, DOUTORADO
};

class Professor : public Funcionario
{
private:
    Nivel nivelProfessor;
    Formacao formacaoProfessor;
    std::string disciplina;
    
public:
    Professor();
    Professor
    (
        Nivel nivelProfessor, Formacao formacaoProfessor, std::string disciplina,
        std::string matricula, float salario, std::string departamento, int cargaHoraria, 
        std::string dataIngresso,std::string nome, std::string cpf, std::string dataNascimento,
        std::string genero, std::string rua, int numero, std::string bairro, std::string cidade,
        std::string cep
    );

    Nivel getNivel();
    void setNivel(Nivel nivelProfessor);

    Formacao getFormacao();
    void setFormacao(Formacao formacaoProfessor);

    std::string getDisciplina();
    void setDisciplina(std::string disciplina);

    Nivel stringToNivel(std::string nivelStr);

    Formacao stringToFormacao(std::string formacaoStr);

};

#endif