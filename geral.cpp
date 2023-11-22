#include <iostream>
#include <vector>
#include <fstream>
#include "geral.hpp"
#include "bancoDAO.hpp"

using namespace std;

BancoDAO banco;

//resgata dados do arquivo funcionarios.txt para o vetor de bancoDAO
void carregarDeArquivoBanco()
{
  vector<string> linhas;
  fstream arquivo;
  arquivo.open("funcionarios.txt", ios::in);
  string linha;
  while (getline(arquivo, linha))
  {
    linhas.push_back(linha);
  }
  arquivo.close();
  if (linhas.empty())
  {
    cout << "Aviso: funcionarios.txt esta vazio." << endl;
  }
  else
  {
    int i = 0;
    while (i < linhas.size() && !linhas[i].compare("[TECNICOSADM]"))
    {
      Professor professor;
      Endereco endereco;

      professor.setNome(linhas[i + 1]);
      professor.setCpf(linhas[i + 2]);
      professor.setDataNascimento(linhas[i + 3]);
      professor.setGenero(linhas[i + 4]);
      endereco.bairro = linhas[i + 5];
      endereco.cep = linhas[i + 6];
      endereco.cidade = linhas[i + 7];
      endereco.numero = stoi(linhas[i + 8]);
      endereco.rua = linhas[i + 9];
      professor.setEndereco(endereco);
      professor.setMatricula(linhas[i + 10]);
      professor.setSalario(stof(linhas[i + 11]));
      professor.setDepartamento(linhas[i + 12]);
      professor.setCargaHoraria(stoi(linhas[i + 13]));
      professor.setDataIngresso(linhas[i + 14]);
      professor.setNivel(professor.stringToNivel(linhas[i + 15]));
      professor.setFormacao(professor.stringToFormacao(linhas[i + 16]));
      professor.setDisciplina(linhas[i + 17]);

      banco.getProfessores().push_back(professor);
      i = i + 18;
    }
    while (i < linhas.size()){
      TecnicoADM tecnicoADM;
      Endereco endereco;

      tecnicoADM.setNome(linhas[i + 1]);
      tecnicoADM.setCpf(linhas[i + 2]);
      tecnicoADM.setDataNascimento(linhas[i + 3]);
      tecnicoADM.setGenero(linhas[i + 4]);
      endereco.bairro = linhas[i + 5];
      endereco.cep = linhas[i + 6];
      endereco.cidade = linhas[i + 7];
      endereco.numero = stoi(linhas[i + 8]);
      endereco.rua = linhas[i + 9];
      tecnicoADM.setEndereco(endereco);
      tecnicoADM.setMatricula(linhas[i + 10]);
      tecnicoADM.setSalario(stof(linhas[i + 11]));
      tecnicoADM.setDepartamento(linhas[i + 12]);
      tecnicoADM.setCargaHoraria(stoi(linhas[i + 13]));
      tecnicoADM.setDataIngresso(linhas[i + 14]);
      tecnicoADM.setAdicionalProdutividade(stof(linhas[ i + 15]));
      tecnicoADM.setFuncaoDesempenhada(linhas[i + 16]);

      banco.getTecnicosADM().push_back(tecnicoADM);
      i = i + 17;
    }
  }
}

void salvarEmArquivoBanco(BancoDAO banco)
{
    fstream arquivo;
    arquivo.open("funcionarios.txt", ios::out);
    arquivo << "[PROFESSORES]" << endl;
    for (Professor professor : banco.getProfessores())
    {
        arquivo << professor.getNome() << endl;
        arquivo << professor.getCpf() << endl;
        arquivo << professor.getDataNascimento() << endl;
        arquivo << professor.getGenero() << endl;
        arquivo << professor.getEndereco().bairro << endl;
        arquivo << professor.getEndereco().cep << endl;
        arquivo << professor.getEndereco().cidade << endl;
        arquivo << professor.getEndereco().numero << endl;
        arquivo << professor.getEndereco().rua << endl;
        arquivo << professor.getMatricula() << endl;
        arquivo << professor.getSalario() << endl;
        arquivo << professor.getDepartamento() << endl;
        arquivo << professor.getCargaHoraria() << endl;
        arquivo << professor.getDataIngresso() << endl;
        arquivo << professor.getNivel() << endl;
        arquivo << professor.getFormacao() << endl;
        arquivo << professor.getDisciplina() << endl;
    }
    arquivo << "[TECNICOSADM]" << endl;
    for (TecnicoADM tecnicos : banco.getTecnicosADM())
    {
        arquivo << tecnicos.getNome() << endl;
        arquivo << tecnicos.getCpf() << endl;
        arquivo << tecnicos.getDataNascimento() << endl;
        arquivo << tecnicos.getGenero() << endl;
        arquivo << tecnicos.getEndereco().bairro << endl;
        arquivo << tecnicos.getEndereco().cep << endl;
        arquivo << tecnicos.getEndereco().cidade << endl;
        arquivo << tecnicos.getEndereco().numero << endl;
        arquivo << tecnicos.getEndereco().rua << endl;
        arquivo << tecnicos.getMatricula() << endl;
        arquivo << tecnicos.getSalario() << endl;
        arquivo << tecnicos.getDepartamento() << endl;
        arquivo << tecnicos.getCargaHoraria() << endl;
        arquivo << tecnicos.getDataIngresso() << endl;
        arquivo << tecnicos.getAdicionalProdutividade() << endl;
        arquivo << tecnicos.getFuncaoDesempenhada() << endl;
    }
    arquivo.close();
}

//limpa a tela
void clear()
{
  system("clear");
}

//Pausa o processo, esperando um caracter qualquer para dar seguimento
void pressQualquer()
{
  std::cout << "\nPressione qualquer tecla para continuar...\n";
  fflush(stdin);
  getchar();
  while (getchar() != '\n'){}
  clear();
}