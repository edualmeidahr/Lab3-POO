#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP

#include <list>
#include <string>
#include <iostream>


class Autor;
class Livros;

class Biblioteca {
public:
    void adicionarLivro(const Livros &livro);
    void mostrarLivros() const;
    void buscarLivro(std:: string titulo, Autor autor);

private:
    std::list<Livros> listaLivros;
};

#endif 
