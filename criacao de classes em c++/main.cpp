#include <iostream>
using namespace std;

#include "pessoa.h"
#include "livro.h"
#include "emprestimo.h"

int main()
{
    Pessoa m("Machado de Assis");
    Livro l("Dom Casmurro",&m);
    Pessoa fulano("Fulano");
    Emprestimo e(&l,&fulano);
    cout << e.getLivroEmprestado()->getAutor()->getNome() << endl;
}