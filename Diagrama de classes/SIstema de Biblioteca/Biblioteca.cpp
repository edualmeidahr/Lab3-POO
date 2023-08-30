#include "Biblioteca.hpp"
#include "Autor.hpp" // Substitua "autor.hpp" pelo nome do arquivo de cabeçalho da classe Autor
#include "Livros.hpp" // Substitua "livro.hpp" pelo nome do arquivo de cabeçalho da classe Livro

void Biblioteca::adicionarLivro(const Livros &livro) {
  listaLivros.push_back(livro);
  std::cout<<"LIVRO ADICIONADO!"<< std::endl;
}

void Biblioteca::mostrarLivros() const {
  for (const Livros &livro : listaLivros) {
    std::cout << "Título: " << livro.getTitulo()
              << ", Autor: " << livro.getAutor().getNomeAutor() << std::endl;
  }
}

void Biblioteca::buscarLivro(std::string titulo, Autor autor) {
  for (const Livros &livro : listaLivros) {
    if (livro.getTitulo() == titulo && livro.getAutor().getNomeAutor() == autor.getNomeAutor()){
      std:: cout<< "Livro encontrado!!\n";
      std::cout << "Titulo:" + livro.getTitulo() + "\nAutor:" + autor.getNomeAutor();      
    }else{
      std::cout<<"Livro não encontrado!\n";
    }     
    }
  }
