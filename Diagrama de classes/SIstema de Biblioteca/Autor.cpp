#include <iostream>
#include "Autor.hpp"

void Autor::setNomeAutor(const std::string& nome) {
    this->nomeAutor = nome;
}

std::string Autor::getNomeAutor() const {
    return this->nomeAutor;
}

void Autor::setDataNascimento(const std::string& data) {
    this->dataNascimento = data;
}

std::string Autor::getDataNascimento() const {
    return this->dataNascimento;
}
