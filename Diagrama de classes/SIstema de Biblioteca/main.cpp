#include <iostream>
#include "Livros.hpp"
#include "Autor.hpp"
#include "Biblioteca.hpp"

using namespace std; 

int main(){
Livros livro;
Autor autor;
Biblioteca biblioteca;
string titulo;
string nomeAutor;
string isbn;.
string data;



cout << "Digite o titulo do livro:\n";
cin >> Titulo;
cout << "Digite o isnb: ";
cin >> isbn;
cout << "Digite o nome do autor:";
cin >> nomeAutor;
cout << "Data nasc do autor: ";
cin >> data;
 
 autor.setnomeAutor(nomeAutor);
 autor.setdataNascimento(data);
 livro.setTitulo(titulo);
 livro.setISBN(isbn);
 livro.setAutor(autor);

 biblioteca.adicionarLivro(livro)
 biblioteca.buscarLivro(titulo, autor)
 biblioteca.mostrarLivros(); 

}