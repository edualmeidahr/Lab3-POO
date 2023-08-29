#include <iostream>
#include "Autor.hpp"
using namespace std;
void Autor::setnomeAutor(string nome){
    this->nomeAutor = nome;
}

string Autor::getnomeAutor(){
    return this->nomeAutor;
}

void Autor::setdataNascimento(string data){
    this->dataNascimento = data;
}

string Autor::getdataNascimento(){
    return this->dataNascimento;
}