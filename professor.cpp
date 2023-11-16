#include <iostream>
#include "professor.hpp"

using namespace std;

Professor::Professor(Nivel nivelProfessor, Formacao formacaoProfessor, string disciplina) :
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