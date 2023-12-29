#if !defined(EMPRESTIMO_H)
#define EMPRESTIMO_H

#include "livro.h"
#include "pessoa.h"

class Emprestimo
{
private:
    Livro* l;
    Pessoa* p;
    bool isAtual;
public:
    Emprestimo(Livro* livro, Pessoa* usuario);
    Livro* getLivroEmprestado();
    Pessoa* getUsuario();
    bool livroDevolvido();
    void devolveLivro();
};

#endif // EMPRESTIMO_H