#ifndef _BIBLIOTECA_HPP
#define _BIBLIOTECA_HPP
#include <string>
#include "Livros.hpp"
using namespace std;


class Biblioteca 
{

    private:
        typedef struct noLista
        {
          Livros  livro;
          noLista *prox;
          int tam;
        } listaLivro;
    public:
     noLista *inicializarLista();
     void adicionarLivro(noLista *&l, Livros livros);
     Livros buscarLivro(noLista *l,string titulo, Autor autor);
     void mostrarLivros();
}
#endif