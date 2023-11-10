#include <iostream>
#include "pessoa.hpp"

using namespace std;

Pessoa::Pessoa(string nome, string cpf, string dataNascimento, string genero,
               string rua, int numero, string bairro, string cidade, string cep) : nome(nome), cpf(cpf), dataNascimento(dataNascimento), genero(genero), endereco({rua, numero, bairro, cidade, cep}) {}

string Pessoa::getNome()
{
    return nome;
}

void Pessoa::setNome(string novoNome)
{
    nome = novoNome;
}

string Pessoa::getCpf()
{
    return cpf;
}

void Pessoa::setCpf(string novoCpf)
{
    cpf = novoCpf;
}

string Pessoa::getDataNascimento()
{
    return dataNascimento;
}

void Pessoa::setDataNascimento(string novaDataNascimento)
{
    dataNascimento = novaDataNascimento;
}

string Pessoa::getGenero()
{
    return genero;
}

void Pessoa::setGenero(string novoGenero)
{
    genero = novoGenero;
}

Endereco Pessoa::getEndereco()
{
    return endereco;
}

void Pessoa::setEndereco(Endereco novoEndereco)
{
    endereco = novoEndereco;
}

void Pessoa::setEndereco(string novaRua,
                         int novoNumero,
                         string novoBairro,
                         string novaCidade,
                         string novoCep)
{
    endereco.rua = novaRua;
    endereco.numero = novoNumero;
    endereco.bairro = novoBairro;
    endereco.cidade = novaCidade;
    endereco.cep = novoCep;
}
