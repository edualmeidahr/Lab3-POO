#include "Pessoa.hpp"
#include <iostream>

void Livros::setTitulo(string titulo;){
    this->titulo = titulo;
}

string Livros::getTitulo(){
    return this->titulo;
}

void Livros::setISBN(string isbn){
    this->isbn = isbn;
}

string Livros::getISBN(){
    return this->isbn;
}

void Livro::setAutor(Autor autor){
    this->autor = autor;
}
Autor Livro::getAutor(){
    return this->Autor;
}