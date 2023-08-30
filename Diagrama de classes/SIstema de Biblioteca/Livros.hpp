#ifndef LIVROS_HPP
#define LIVROS_HPP

#include <string>
#include "Autor.hpp"

class Livros {
private:
    std::string titulo;
    std::string isbn;
    Autor autor;

public:
    Livros() = default;  // Construtor padrão
    Livros(const std::string& titulo, const std::string& isbn, const Autor& autor);
    
    void setTitulo(const std::string& titulo);
    std::string getTitulo() const;

    void setISBN(const std::string& isbn);
    std::string getISBN() const;

    void setAutor(const Autor& autor);
    Autor getAutor() const;
};

#endif
