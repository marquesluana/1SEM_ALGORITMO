#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale (LC_ALL,"Portuguese");
	string nome;
	char resp;

do{	
	cout << "Digite o seu nome \n";
	cin >> nome;
	getline (cin,nome);
		
	cout << "Deseja repetir? \n";
	cin >> resp;
	}while(resp=='S' || resp=='s');
	
	cout << "========FIM========";
	
	return 0;
}
