#ifndef _LIVROS_HPP
#define _LIVROS_HPP
#include <string>
#include "Autor.hpp"

class Livros 
{
private:

string titulo;
string isbn;
Autor autor;

public:

void setTitulo(string titulo);
string getTitulo();

void setISBN(string isbn);
string getISBN();

void setAutor(Autor autor);
Autor getAutor();
}

#endif