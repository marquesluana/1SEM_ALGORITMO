#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	for(int cont=1; cont<=100; cont++){
	if(cont%10==0){
		cout << cont << "(Múltiplo de 10)" << endl;
	}else{
		cout << cont << endl;
	}
	}
	
	return 0;
}
