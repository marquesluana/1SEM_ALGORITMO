#include <iostream>
#include <locale>

using namespace std;

int main() {
	int cont=0;
	string nome;
	
	cout << "Digite seu nome";
	cin >> nome;
	
	do{
		cout << cont << endl << nome << endl;
		cont = cont+2;
	}while(cont<=100);
	
	
	
	return 0;
}
