#include<iostream>
#include "pessoa.hpp"

using namespace std;

string Pessoa::getNome() {
    return nome;
}

void Pessoa::setNome(string nome) {
    this->nome = nome;
}

string Pessoa::getCpf() {
    return cpf;
}

void Pessoa::setCpf(string cpf) {
    this->cpf = cpf;
}

string Pessoa::getDataNascimento() {
    return dataNascimento;
}

void Pessoa::setDataNascimento(string dataNascimento) {
    this->dataNascimento = dataNascimento;
}

string Pessoa::getGenero() {
    return genero;
}

void Pessoa::setGenero(string genero) {
    this->genero = genero;
}

Endereco Pessoa::getEndereco() {
    return endereco;
}

void Pessoa::setEndereco(Endereco endereco) {
    this->endereco = endereco;
}

void Pessoa::setEndereco(std::string rua,
                          int numero,
                          std::string bairro,
                          std::string cidade,
                          std::string cep) {
    this->endereco.rua = rua;
    this->endereco.numero = numero;
    this->endereco.bairro = bairro;
    this->endereco.cidade = cidade;
    this->endereco.cep = cep;
}
