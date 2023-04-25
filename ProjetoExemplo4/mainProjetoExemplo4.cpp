#include <iostream>
#include <locale>

using namespace std;

int main() {
	//contagem progressiva
	for(int cont=1; cont <= 10; cont++){
		cout << cont << endl;
	}
	
	cout << endl;
	
	//contagem regressiva
	for(int cont=15000; cont > 0; cont--){
		cout << cont << endl;
	}
	
	cout << "EXPLOSÃO TCHAKABUM";
	
	return 0;
}
