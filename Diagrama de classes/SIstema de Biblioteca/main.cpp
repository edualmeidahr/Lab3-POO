#include <iostream>
#include "Livros.hpp"
#include "Autor.hpp"
#include "Biblioteca.hpp"

int main() {
    int op;
    Livros livro;
    Autor autor;
    Biblioteca biblioteca;
    std::string titulo;
    std::string nomeAutor;
    std::string isbn;
    std::string data;

    do {
        std::cout << "-------------ESCOLHA UMA DAS OPCOES-----------" << std::endl;
        std::cout << "1) Adicionar livro" << std::endl;
        std::cout << "2) Buscar livro" << std::endl;
        std::cout << "3) Mostrar lista" << std::endl;
        std::cout << "4) Sair do programa" << std::endl;
        std::cin >> op;

        switch (op) {
            case 1:
                std::cout << "Digite o titulo do livro: ";
                std::cin >> titulo;
                std::cout << "Digite o isnb: ";
                std::cin >> isbn;
                std::cout << "Digite o nome do autor: ";
                std::cin >> nomeAutor;
                std::cout << "Data nasc do autor: ";
                std::cin >> data;

                autor.setNomeAutor(nomeAutor);
                autor.setDataNascimento(data);
                livro.setTitulo(titulo);
                livro.setISBN(isbn);
                livro.setAutor(autor);

                biblioteca.adicionarLivro(livro);
                break;
            case 2:
                std::cout << "Digite o titulo do livro: ";
                std::cin >> titulo;
                std::cout << "Digite o nome do autor: ";
                std::cin >> nomeAutor;
                autor.setNomeAutor(nomeAutor);
                std::cout << "Data nasc do autor: ";
                std::cin >> data;
                autor.setDataNascimento(data);

                biblioteca.buscarLivro(titulo, autor); 
                break;
            case 3:
                biblioteca.mostrarLivros();
                break;
        }
    } while (op != 4);

    std::cout << "Obrigado por usar o programa!" << std::endl;

    return 0;
}
