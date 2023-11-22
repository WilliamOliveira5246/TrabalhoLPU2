#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <iostream>

struct Endereco
{
    std::string rua;
    int numero;
    std::string bairro;
    std::string cidade;
    std::string cep;
};

class Pessoa
{
private:
    std::string nome;
    std::string cpf;
    std::string dataNascimento;
    std::string genero;
    Endereco endereco;

public:
    Pessoa();
    Pessoa
    (
        std::string nome, std::string cpf, std::string dataNascimento, std::string genero,
        std::string rua, int numero, std::string bairro, std::string cidade, std::string cep
    );

    std::string getNome();
    void setNome(std::string nome);

    std::string getCpf();
    void setCpf(std::string cpf);

    std::string getDataNascimento();
    void setDataNascimento(std::string dataNascimento);

    std::string getGenero();
    void setGenero(std::string genero);

    Endereco getEndereco();
    void setEndereco(Endereco endereco);
    void setEndereco(std::string rua, int numero, std::string bairro, std::string cidade, std::string cep);
};

#endif