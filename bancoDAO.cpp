#include <iostream>
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

void BancoDAO::cadastrarProfessor()
{   
    string aux;
    aux.clear();
    while (cin.get() != '\n') {}

    string matricula;
    cout << "Matricula: ";
    aux.clear();
    getline(cin,aux);
    try {
        verificaPreExistenciaMatriculaProfessor(aux);
        matricula = aux;
    }
    catch(invalid_argument& e)
    {
        cout << "Erro: " << e.what();
    }
    cout << endl;

    string nome;
    cout << "Nome: ";
    getline(cin,nome);
    cout << endl;

    string cpf;
    cout << "Cpf (000.000.000-00): ";
    getline(cin,cpf);
    cout << endl;

    string dataNascimento;
    cout << "Data Nascimento (dd/mm/aaaa): ";
    getline(cin,dataNascimento);
    cout << endl;

    string genero;
    cout << "Genero (Masculino / Feminino / Outro): ";
    getline(cin,genero);
    cout << endl;

    string rua;
    cout << "Rua: ";
    getline(cin,rua);
    cout << endl;

    int numero;
    cout << "Numero: ";
    aux.clear();
    getline(cin,aux);
    try
    {
        numero = stoi(aux);
    }
    catch(invalid_argument& e)
    {
        cout << "Erro: " << e.what();
    }
    cout << endl;

    string bairro;
    cout << "Bairro: ";
    getline(cin,bairro);
    cout << endl;

    string cidade;
    cout << "Cidade: ";
    getline(cin,cidade);
    cout << endl;

    string cep;
    cout << "Cep: ";
    getline(cin,cep);
    cout << endl;

    float salario;
    cout << "Salario (0000.00): ";
    aux.clear();
    getline(cin,aux);
    try
    {
        salario = stof(aux);
    }
    catch(invalid_argument& e)
    {
        cout << "Erro: " << e.what();
    }
    cout << endl;

    string departamento;
    cout << "Departamento: ";
    getline(cin,departamento);
    cout << endl;

    int cargaHoraria;
    cout << "Carga Horaria (nn): ";
    aux.clear();
    getline(cin,aux);
    try
    {
        cargaHoraria = stoi(aux);
    }
    catch(invalid_argument& e)
    {
        cout << "Erro: " << e.what();
    }
    cout << endl;

    string dataIngresso;
    cout << "Data Ingresso (dd/mm/aaaa): ";
    getline(cin,dataIngresso);
    cout << endl;

    Nivel nivelProfessor;
    cout << "Nivel (I, II, III, IV, V, VI, VII, VIII): " << endl;
    aux.clear();
    getline(cin,aux);
    try
    {
        nivelProfessor = Professor::stringToNivel(aux);
    }
    catch(invalid_argument& e)
    {
        cout << "Erro: " << e.what();
    }
    cout << endl;

    Formacao formacaoProfessor;
    cout << "Formacao: (ESPECIALIZACAO, MESTRADO, DOUTORADO)";
    aux.clear();
    getline(cin,aux);
    try
    {
        formacaoProfessor = Professor::stringToFormacao(aux);
    }
    catch(invalid_argument& e)
    {
        cout << "Erro: " << e.what();
    }
    cout << endl;

    string disciplina;
    cout << "Disciplina: ";
    getline(cin,disciplina);

    try
    {
        Professor professor
        (
            nivelProfessor,formacaoProfessor,disciplina,matricula,
            salario,departamento,cargaHoraria,dataIngresso,
            nome,cpf,dataNascimento,genero,
            rua,numero,bairro,cidade,cep
        );
        professores.push_back(professor);
        cout << "Professor cadastrado com sucesso!" << endl;
    }
    catch(const exception& e)
    {
        cerr << e.what() << '\n';
    }

}

void BancoDAO::cadastrarTecnicoADM()
{   
    string aux;
    aux.clear();

    string matricula;
    cout << "Matricula: ";
    aux.clear();
    getline(cin,aux);
    try {
        verificaPreExistenciaMatriculaProfessor(aux);
        matricula = aux;
    }
    catch(invalid_argument& e)
    {
        cout << "Erro: " << e.what();
    }
    cout << endl;

    string nome;
    cout << "Nome: ";
    getline(cin,nome);
    cout << endl;

    string cpf;
    cout << "Cpf: (000.000.000-00)";
    getline(cin,cpf);
    cout << endl;

    string dataNascimento;
    cout << "Data Nascimento: (dd/mm/aaaa)";
    getline(cin,dataNascimento);
    cout << endl;

    string genero;
    cout << "Genero: (Masculino / Feminino / Outro)";
    getline(cin,genero);
    cout << endl;

    string rua;
    cout << "Rua: ";
    getline(cin,rua);
    cout << endl;

    int numero;
    cout << "Numero: ";
    aux.clear();
    getline(cin,aux);
    try
    {
        numero = stoi(aux);
    }
    catch(invalid_argument& e)
    {
        cout << "Erro: " << e.what();
    }
    cout << endl;

    string bairro;
    cout << "Bairro: ";
    getline(cin,bairro);
    cout << endl;

    string cidade;
    cout << "Cidade: ";
    getline(cin,cidade);
    cout << endl;

    string cep;
    cout << "Cep: ";
    getline(cin,cep);
    cout << endl;

    float salario;
    cout << "Salario (0000,00): ";
    aux.clear();
    getline(cin,aux);
    try
    {
        salario = stof(aux);
    }
    catch(invalid_argument& e)
    {
        cout << "Erro: " << e.what();
    }
    cout << endl;

    string departamento;
    cout << "Departamento: ";
    getline(cin,departamento);
    cout << endl;

    int cargaHoraria;
    cout << "Carga Horaria: (nn)";
    aux.clear();
    getline(cin,aux);
    try
    {
        cargaHoraria = stoi(aux);
    }
    catch(invalid_argument& e)
    {
        cout << "Erro: " << e.what();
    }
    cout << endl;

    string dataIngresso;
    cout << "Data Ingresso: (dd/mm/aaaa)";
    getline(cin,dataIngresso);
    cout << endl;

    float adicionalProdutividade;
    cout << "Adicional de Produtividade: (0000,00)";
    aux.clear();
    getline(cin,aux);
    try
    {
        adicionalProdutividade = stof(aux);
    }
    catch(invalid_argument& e)
    {
        cout << "Erro: " << e.what();
    }
    cout << endl;

    string funcaoDesempenhada;
    cout << "Funcao Desempenhada: ";
    getline(cin,funcaoDesempenhada);

    try
    {
        TecnicoADM tecnicoADM
        (
            adicionalProdutividade, funcaoDesempenhada,
            matricula, salario, departamento, cargaHoraria, 
            dataIngresso, nome, cpf, dataNascimento,
            genero, rua, numero, bairro, cidade, cep
        );
        tecnicosADM.push_back(tecnicoADM);
        cout << "Técnico ADM cadastrado com sucesso!" << endl;
    }
    catch(const exception& e)
    {
        cerr << e.what() << '\n';
    }
}

void BancoDAO::listarProfessores()
{
    cout << "Lista de Professores: ";
    if (professores.empty())
    {
        cout << "Vazio" << endl;
    }
    else
    {   
        cout << endl;
        for (Professor professor : professores)
        {
            cout << "Nome: " << professor.getNome() << ", Disciplina: " << professor.getDisciplina() << endl;
        }
    }
}

void BancoDAO::listarTecnicosADM()
{
    cout << "Lista de Técnicos ADM: ";
    if (tecnicosADM.empty())
    {
        cout << "Vazio" << endl;
    }
    else
    {
        cout << endl;
        for (TecnicoADM tecnicoADM : tecnicosADM)
        {
            cout << "Nome: " << tecnicoADM.getNome() << ", Função: " << tecnicoADM.getFuncaoDesempenhada() << endl;
        }
    }
}

void BancoDAO::deletarProfessor(int matriculaNumerica)
{
    string matricula = to_string(matriculaNumerica);
    try
    {
        verificaExistenciaProfessor(matricula);
        for (vector<Professor>::iterator it = professores.begin(); it != professores.end(); ++it)
        {
            if (it->getMatricula() == matricula)
            {
                it = professores.erase(it);
                cout << "Professor removido com sucesso!" << endl;
                break;
            }
        }
    }
    catch (const invalid_argument& e)
    {
        cout << "Erro: " << e.what() << endl;
    }
}

void BancoDAO::deletarTecnicoADM(int matriculaNumerica)
{   
    string matricula = to_string(matriculaNumerica);
    try
    {   
        verificaExistenciaTecnicoADM(matricula);
        for (vector<TecnicoADM>::iterator it = tecnicosADM.begin(); it != tecnicosADM.end(); ++it)
        {
            if (it->getMatricula() == matricula)
            {
                tecnicosADM.erase(it);
                cout << "Técnico ADM removido com sucesso!" << endl;
                return;
            }
        }
    }
    catch (const invalid_argument& e)
    {
        cout << "Erro: " << e.what() << endl;
    }
}

Professor BancoDAO::buscarProfessor(int matriculaNumerica)
{   
    string matricula = to_string(matriculaNumerica);
    for (vector<Professor>::iterator it = professores.begin(); it != professores.end(); ++it)
    {
        if (it->getMatricula() == matricula)
        {
            return *it;
        }
    }

    cout << "Professor não encontrado." << endl;
    Professor vazio;
    return vazio;
}

TecnicoADM BancoDAO::buscarTecnicoADM(int matriculaNumerica)
{   
    string matricula = to_string(matriculaNumerica);
    for (vector<TecnicoADM>::iterator it = tecnicosADM.begin(); it != tecnicosADM.end(); ++it)
    {
        if (it->getMatricula() == matricula)
        {
            return *it;
        }
    }

    cout << "TécnicoADM não encontrado." << endl;
    TecnicoADM vazio;
    return vazio;
}


void BancoDAO::verificaPreExistenciaMatriculaProfessor(string matricula)
{
    for (Professor professor : professores)
    {
        if (professor.getMatricula() == matricula)
        {
            throw invalid_argument("Matrícula já existe. Não é possível cadastrar o professor.");
        }
    }
}

void BancoDAO::verificaPreExistenciaMatriculaTecnicoADM(string matricula)
{
    for (TecnicoADM tecnicoADM : tecnicosADM)
    {
        if (tecnicoADM.getMatricula() == matricula)
        {
            throw invalid_argument("Matrícula já existe. Não é possível cadastrar o tecnicoADM.");
        }
    }
}

void BancoDAO::verificaExistenciaProfessor(string matricula)
{
    bool existe = false;
    for (Professor prof : professores)
    {
        if (prof.getMatricula() == matricula)
        {
            existe = true;
            break;
        }
    }
    if (!existe)
    {
        throw invalid_argument("Não existe professor com essa matricula.");
    }
}

void BancoDAO::verificaExistenciaTecnicoADM(string matricula)
{
    bool existe = false;
    for (TecnicoADM tecnicoADM : tecnicosADM)
    {
        if (tecnicoADM.getMatricula() == matricula)
        {
            existe = true;
            break;
        }
    }
    if (!existe)
    {
        throw invalid_argument("Não existe tecnicoADM com essa matricula.");
    }
}