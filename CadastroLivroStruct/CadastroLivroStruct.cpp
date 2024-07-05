#include <iostream>
#include <string>
#include <locale>


struct Livro {

	int ID;
	int AnoDeLancamento;
	std::string Titulo;
	std::string Autor;
	std::string Editora;
};
int main() {
	
	setlocale(LC_ALL, "portuguese");

	Livro livro[5];

	for (int i = 0; i < 5; i++) {

		std::cout << "*****Cadastro de Livro*****\n";

		std::cout << "Digite o ID do livro " << i + 1 << " : ";
		std::cin >> livro[i].ID;

		std::cout << "\nDigite o Ano de Lançamento do Livro " << i + 1 << " : ";
		std::cin >> livro[i].AnoDeLancamento;

		std::cout << "\nDigite o Titulo do livro " << i + 1 << " : ";
		std::cin.ignore();
		std::getline(std::cin, livro[i].Titulo);

		std::cout << "\nDigite o Autor do livro " << i + 1 << " : ";
		std::getline(std::cin, livro[i].Autor);

		std::cout << "\nDigite a Editora do livro " << i + 1 << " : ";
		std::getline(std::cin, livro[i].Editora);
		system("CLS");

	}
	std::cout << "**********Livros cadastrados**********\n";
	for (int i = 0; i < 5; i++) {

		std::cout << "\nID: " << livro[i].ID << "\nAno de lançamento: " << livro[i].AnoDeLancamento << "\nTitulo : " << livro[i].Titulo << "\nAutor : " << livro[i].Autor << "\nAutor : " << livro[i].Editora << '\n';

		std::cout << "----------------------------------------------------------------------" << '\n';
	}
	std::cout << "*****************************************************************" << '\n';

	

	return 0;
}