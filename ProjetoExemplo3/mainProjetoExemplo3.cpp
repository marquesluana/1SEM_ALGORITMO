#include <iostream>
#include <locale>

using namespace std;

int main() {
	int cont=1;
	char resp;	
	
	//enquanto contador for menor ou igual a 10 faça
	
	/*while(cont <=10){
		cout << cont << endl;
		cont++;
	}*/
	

	
	while(resp == 'S'){
		
		cout << cont << endl;
		
		cout << "Deseja continuar? \n";
		cin >> resp;
	}
	
	return 0;
}
