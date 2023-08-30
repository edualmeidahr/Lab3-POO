#ifndef AUTOR_HPP
#define AUTOR_HPP

#include <string>

class Autor {
private:
    std::string nomeAutor;
    std::string dataNascimento;

public:
    void setNomeAutor(const std::string& nome);
    std::string getNomeAutor() const;

    void setDataNascimento(const std::string& data);
    std::string getDataNascimento() const;
};
#endif
