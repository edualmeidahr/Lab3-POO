#include <iostream>
#include "Biblioteca.hpp"
using namespace std;




noLista * Biblioteca::inicializarLista(){
    tam =0;
    return NULL;
}

void Biblioteca::adicionarLivro(noLista *&l, Livros livros)
{
    noLista *novo = new noLista;
    novo->livros    = livros;
    novo->prox    = l;
    l             = novo;
    tam++;
}

Livros Biblioteca::buscarLivro(noLista *l, string titulo, Autor autor){

while ( listaLivro< tam)
    {
        if(getTitulo() == titulo && getAutor() == autor)
        cout << l->livros << "\n";
        l = l->prox;
    }

}