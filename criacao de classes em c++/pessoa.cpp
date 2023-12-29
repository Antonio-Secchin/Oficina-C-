#include "pessoa.h"

#include <iostream>
void imprimePessoa(Pessoa p)
{
    std::cout << p.getNome() << std::endl << std::endl;
}

Pessoa::Pessoa(string nome)
{
    this->nome=nome;
}

string Pessoa::getNome()
{
    return this->nome;
}

void Pessoa::setNome(string nome)
{
    this->nome=nome;
}