#ifndef BANCODAO_HPP
#define BANCODAO_HPP

#include <iostream>
#include <vector>
#include <stdexcept>
#include "professor.hpp"
#include "tecnicoADM.hpp"

class BancoDAO
{
private:
    std::vector<Professor> professores;
    std::vector<TecnicoADM> tecnicosADM;

public:
    std::vector<Professor> getProfessores();

    std::vector<TecnicoADM> getTecnicosADM();

    //Cadastra um novo professor
    void cadastrarProfessor();

    //Cadastra um novo tecnicoADM
    void cadastrarTecnicoADM();

    //Lista todos os professores por nome e disciplina
    void listarProfessores();

    //Lista todos os tecnicosADM por nome e funçao
    void listarTecnicosADM();

    //Apaga um professor a partir de sua matrícula
    void deletarProfessor(int matricula);

    //Apaga um TecnicoADM a partir de sua matrícula
    void deletarTecnicoADM(int matricula);

    //Localiza e exibe um professor a partir de uma matrícula passada como parâmetro
    Professor buscarProfessor(int matricula);

    //Localiza e exibe um TecnicoADMa partir de uma matrícula passada como parâmetro
    TecnicoADM buscarTecnicoADM(int matricula);

    void verificaPreExistenciaMatriculaProfessor(std::string matricula);

    void verificaPreExistenciaMatriculaTecnicoADM(std::string matricula);

    void verificaExistenciaProfessor(std::string matricula);

    void verificaExistenciaTecnicoADM(std::string matricula);
};

#endif