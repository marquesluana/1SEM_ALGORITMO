#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	int numerosecreto, chute;
	
	numerosecreto = 235;
	
	cout << "Chute qual é o número secreto (entre 1 e 500):\n";
	cin >> chute;
	
	do{
		if(chute!=numerosecreto){
			cout << "Errou, tente novamente:\n";
		cin >> chute;
		}
	}while(chute!=numerosecreto);

	cout << "Parabéns, você acertou!";
	
	return 0;
}
