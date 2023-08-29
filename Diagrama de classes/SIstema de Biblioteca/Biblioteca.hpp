#ifndef _BIBLIOTECA_HPP
#define _BIBLIOTECA_HPP
#include <string>
#include "Livros.hpp"
#include "Autor.hpp"
using namespace std;

    

class Biblioteca 
{
    private:
        listaLivro L;

    public:
    typedef struct noLista
    {
        Livros  livro;
        noLista *prox;
        int tam;
    } listaLivro;
    
     noLista *inicializarLista();
     void adicionarLivro(noLista *&L, Livros livros);
     Livros buscarLivro(noLista *L,string titulo, Autor autor);
     void mostrarLivros(noLista *L);
}
#endif