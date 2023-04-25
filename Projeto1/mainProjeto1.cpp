#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	string nome;
	
	cout << "Digite seu nome";
	cin >> nome;
	
	for(int i=0; i<10; i++){
		cout << nome << endl;
	}
	
	return 0;
}
