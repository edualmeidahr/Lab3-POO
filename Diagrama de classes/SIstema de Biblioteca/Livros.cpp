#include "Livros.hpp""
#include <iostream>

void Livros::setTitulo(const std::string& titulo) {
    this->titulo = titulo;
}

std::string Livros::getTitulo() const {
    return this->titulo;
}

void Livros::setISBN(const std::string& isbn) {
    this->isbn = isbn;
}

std::string Livros::getISBN() const {
    return this->isbn;
}

void Livros::setAutor(const Autor& autor) {
    this->autor = autor;
}

Autor Livros::getAutor() const {
    return this->autor;
}
