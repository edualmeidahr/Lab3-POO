#ifndef _AUTOR_HPP
#define _AUTOR_HPP
#include <string>


class Autor
{
private:
string nomeAutor;
string dataNascimento;

public:

void setnomeAutor(string nome);
string getnomeAutor();

void setdataNascimento(string data);
string getdataNascimento();
}
#endif
