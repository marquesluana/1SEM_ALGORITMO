#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	int soma, nota, cont=0;
	float media;
	
	while(nota != -1){
		cout << "Digite sua nota \n";
		cin >> nota;
		soma = soma + nota;
		cont++;
	}
	
	media = (float) (soma+1) / (cont-1);
	
	cout << "A sua média final é: " << media << endl;
	
	
	return 0;
}
