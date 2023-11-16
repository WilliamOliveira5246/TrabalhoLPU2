#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

#include <iostream>

enum Nivel{
    I, II, III, IV, V, VI, VII, VIII
};

enum Formacao{
    ESPECIALIZACAO, MESTRADO, DOUTORADO
};

class Professor{
private:
    Nivel nivelProfessor;
    Formacao formacaoProfessor;
    std::string disciplina;
    
public:
    Professor(Nivel nivelProfessor, Formacao formacaoProfessor, std::string disciplina);

    Nivel getNivel();
    void setNivel(Nivel nivelProfessor);

    Formacao getFormacao();
    void setFormacao(Formacao formacaoProfessor);

    std::string getDisciplina();
    void setDisciplina(std::string disciplina);
};

#endif