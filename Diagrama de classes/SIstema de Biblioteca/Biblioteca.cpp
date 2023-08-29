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

while ( L.tam < tam)
    {
        if(l.livro.getTitulo() == titulo && l.livro.getAutor() == autor)
        cout << l->livros << "\n";
        l = l->prox;
    }
}

void Biblioteca:: mostrarLivros(noLista *l){
    while (L.tam < tam){
        cout<< l->livros << "\n";
        l = l->prox;
    }
}