#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	string nomePaciente;
	float altura, peso, IMC;
	
	cout << "Digite seu nome \n";
	cin >> nomePaciente;
	
	cout << "Digite sua altura \n";
	cin >> altura;
	
	cout << "Digite seu peso \n";
	cin >> peso;
	
	IMC = peso / (altura*altura);
	
	cout << "Olá " << nomePaciente << ", seu IMC é: " << IMC << ".\n";
	
	/*if(IMC < 18){
		cout << "Magreza";
	}
	
	if(IMC>=18 && IMC<25){
		cout << "Normal";
	}
	
	if(IMC>=25 && IMC<30){
		cout << "Sobrepeso";
	}
	
	if(IMC > 30){
		cout << "Obesidade I"; 
	}*/
	
	if(IMC < 18){
		cout << "Magreza";
	}else if(IMC>=18 && IMC<25){
		cout << "Normal";
	}else if(IMC>=25 && IMC<30){
		cout << "Sobrepeso";
	}else if(IMC>=30 && IMC<35){
		cout << "Obesidade I"; 
	}else if(IMC>=35 && IMC<40){
		cout << "Obesidade II";
	}else {
		cout << "Obesidade III";
	}
	
	
	return 0;
}
