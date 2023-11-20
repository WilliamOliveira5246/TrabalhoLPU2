#ifndef BANCODAO_HPP
#define BANCODAO_HPP

#include <iostream>
#include "professor.hpp"
#include "tecnicoADM.hpp"
#include <vector>

class BancoDAO
{
private:
    std::vector<Professor> professores;
    std::vector<TecnicoADM> tecnicosADM;

public:
    vector<Professor> getProfessores();

    vector<TecnicoADM> getTecnicosADM();

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

    void salvarEmArquivo(BancoDAO banco);

};

#endif