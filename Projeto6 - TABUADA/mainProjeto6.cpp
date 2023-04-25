#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	int tabuada;
	
	cout << "Digite o número que deseja ver a tabuada:" << endl;
	cin >> tabuada;
	
	for (int cont=1; cont<=10; cont++){
		cout << tabuada << " X " << cont << " = " << tabuada*cont << endl;
	}
	
/*	cout << tabuada << "X1 ="<< tabuada*1 << endl;
	cout << tabuada << "X2 ="<< tabuada*2 << endl;
	cout << tabuada << "X3 ="<< tabuada*3 << endl;
	cout << tabuada << "X4 ="<< tabuada*4 << endl;
	cout << tabuada << "X5 ="<< tabuada*5 << endl; 
	cout << tabuada << "X6 ="<< tabuada*6 << endl;
	cout << tabuada << "X7 ="<< tabuada*7 << endl;
	cout << tabuada << "X8 ="<< tabuada*8 << endl;
	cout << tabuada << "X9 ="<< tabuada*9 << endl;
	cout << tabuada << "X10 ="<< tabuada*10 << endl;*/
	
	return 0;
}
