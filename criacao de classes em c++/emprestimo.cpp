#include "emprestimo.h"

Emprestimo::Emprestimo(Livro *livro, Pessoa *usuario)
{
    this->l=livro;
    this->p=usuario;
}

Livro *Emprestimo::getLivroEmprestado()
{
    return this->l;
}

Pessoa *Emprestimo::getUsuario()
{
    return this->p;
}

bool Emprestimo::livroDevolvido()
{
    return !this->isAtual;
}

void Emprestimo::devolveLivro()
{
    this->isAtual=false;
}