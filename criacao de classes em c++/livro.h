#if !defined(LIVRO_H)
#define LIVRO_H

#include "pessoa.h"
#include <iostream>

class Livro
{
    string titulo;
    Pessoa* autor;
public: 
    Livro(string titulo, Pessoa* autor);
    string getTitulo();
    Pessoa* getAutor();
};

#endif // LIVRO_H