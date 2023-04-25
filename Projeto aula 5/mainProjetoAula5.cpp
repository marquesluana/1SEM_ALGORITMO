#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	string nome;
	float nota1, nota2, nota3, media;
		
	cout << "Digite seu nome \n";
	cin >> nome;
	
	cout << "Digite sua 1ª nota \n";
	cin >> nota1;
	
	cout << "Digite sua 2ª nota \n";
	cin >> nota2;
	
	cout << "Digite sua 3ª nota \n";
	cin >> nota3;
	
	media = (nota1 + nota2 + nota3) / 3;
		
	cout << "Olá " << nome << ", sua média é " << media << ".\n";
	
	if(media>=6){
		cout << "APROVADO";
	}else{
		cout << "REPROVADO";
	}
	
	
	return 0;
}
