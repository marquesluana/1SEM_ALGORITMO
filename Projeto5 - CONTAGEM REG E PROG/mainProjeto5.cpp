#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	int inicio, fim;

	cout << "Digite o número inicial da contagem \n";
	cin >> inicio;
	
	cout << "Digite o número final da contagem \n";
	cin >> fim;
	
	if(inicio<=fim){
		cout << "Contagem progressiva \n";
		for(int i=inicio; i!=fim+1; i++){
			cout << i << endl;
		}
		}else{
		cout << "Contagem regressiva \n";
		for(int i=inicio; i!=fim-1; i--){
			cout << i << endl;
		}
	}
	/*if(inicio<=fim){
		cout << "Contagem progressiva \n";
		for(int i=inicio; i<=fim; i++){
			cout << i << endl;
		}
		}else{
		cout << "Contagem regressiva \n";
		for(int i=inicio; i>=fim; i--){
			cout << i << endl;
		}
	} */


	return 0;
}
