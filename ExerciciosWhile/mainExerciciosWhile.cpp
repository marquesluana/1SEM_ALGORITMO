#include <iostream>
#include <locale>

using namespace std;
  
int main() {
	setlocale(LC_ALL,"Portuguese");
	int cont=1, numero, soma=0;
	float media;
	
	while(cont<=5){
		cout << cont << " Digite um número inteiro" << endl;
		cin >> numero;
		soma = soma + numero;
		cont++;
			}

	
	cout << endl;
	
	cout << "A soma dos números é: " << soma << endl;
	
	media = (float) soma / cont;
	
	cout << "A média dos números é: " << media << endl;
	
	
	return 0;
}
