#include <iostream>
#include <string>


struct Livro {

	int ID;
	int AnoDeLancamento;
	std::string Tituto;
	std::string Autor;
	std::string Editora;
	
};

int main() {

	struct Livro livro;

	std::cout << "*****Cadastro de Livro*****\n";
	
	std::cout << "Digite o ID do livro: ";
	std::cin >> livro.ID;

	std::cout << "\nDigite o Ano de Lançamento do Livro: ";
	std::cin >> livro.AnoDeLancamento;

	std::cout << "\nDigite o Titulo do livro: ";
	std::cin.ignore();
	std::getline(std::cin, livro.Tituto);

	std::cout << "\nDigite o Autor do livro: ";
	std::getline(std::cin, livro.Autor);

	std::cout << "\nDigite a Editora do livro: ";
	std::getline(std::cin, livro.Editora);


	std::cout << "\nID: " << livro.ID << "\nAno de lançamento: " << livro.AnoDeLancamento << "\nTitulo : " << livro.Tituto << "\nAutor : " << livro.Autor << "\nAutor : " << livro.Editora << '\n';


	return 0;
}