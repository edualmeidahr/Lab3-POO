#ifndef _BIBLIOTECA_HPP
#define _BIBLIOTECA_HPP
#include <string>
#include "Livros.hpp"
#include "Autor.hpp"
using namespace std;

   typedef struct noLista
    {
        Livros  livro;
        noLista *prox;
        int tam;
    } listaLivro;   

class Biblioteca 
{
    private:
      

        listaLivro L;

    public:
     noLista *inicializarLista();
     void adicionarLivro(Livros livros);
     Livros buscarLivro(string titulo, Autor autor);
     void mostrarLivros();
}
#endif