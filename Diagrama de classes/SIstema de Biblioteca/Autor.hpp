#ifndef _AUTOR_HPP
#define _AUTOR_HPP
#include <string>

class Autor
{
private:
string nomeAutor;
string dataNascimento;

public:

void setnome(string nome);
string getnome();

void setdata(string data);
string getdata();
}
#endif
