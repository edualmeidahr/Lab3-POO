#include <iostream>
#include "Biblioteca.hpp"
using namespace std;


Biblioteca::Biblioteca(){
    L=NULL;
    L.tam =0;
}

void Biblioteca::adicionarLivro( Livros livros)
{
    noLista *novo = new noLista;
    novo->livros    = livros;
    novo->prox    = l;
    l             = novo;
    L.tam++;
}

Livros Biblioteca::buscarLivro( string titulo, Autor autor){

while ( L.tam < tam)
    {
        if(l.livro.getTitulo() == titulo && l.livro.getAutor() == autor)
        cout << l->livros << "\n";
        l = l->prox;
    }
}

void Biblioteca:: mostrarLivros(){
    while (L.tam){
        cout<< l->livros << "\n";
        l = l->prox;
    }
}