#include <iostream>
#include <map>
#include <vector>
#include <fstream>
#include "bancoDAO.hpp"

using namespace std;

vector<Professor> BancoDAO::getProfessores()
{
    return professores;
}

vector<TecnicoADM> BancoDAO::getTecnicosADM()
{
    return tecnicosADM;
}







