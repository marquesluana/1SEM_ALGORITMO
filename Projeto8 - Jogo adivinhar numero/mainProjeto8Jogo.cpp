#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	int numerosecreto, chute;
	
	numerosecreto = 235;
	
	cout << "Chute qual � o n�mero secreto (entre 1 e 500):\n";
	cin >> chute;
	
	do{
		if(chute!=numerosecreto){
			cout << "Errou, tente novamente:\n";
		cin >> chute;
		}
	}while(chute!=numerosecreto);

	cout << "Parab�ns, voc� acertou!";
	
	return 0;
}
