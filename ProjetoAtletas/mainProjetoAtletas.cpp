#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
	string nomeAtleta;
	int anoAtual, anoNascimento, estiloNado, idade;
	
	cout << "Digite seu nome: \n";
	cin >> nomeAtleta;
	
	cout << "Digite o ano em que estamos: \n";
	cin >> anoAtual;
	
	cout << "Digite o ano do seu nascimento: \n";
	cin >> anoNascimento;
	
	cout << "Digite o nº do nado de acordo com a relação abaixo: \n 1 - Nado Livre \n 2 - Nado de Costas \n 3 - Nado Borboleta \n";
	cin >> estiloNado;
	
	idade = anoAtual - anoNascimento;
	
	/*if (estiloNado==1 && idade<=16){
		cout << "Dirija-se a piscina 01. \n";
	} else if (estiloNado==1 && idade>16){
		cout << "Dirija-se a piscina 05. \n";
	} else if (estiloNado==2 && idade<=21){
		cout << "Dirija-se a piscina 02. \n";
	} else if (estiloNado==2 && idade>21){
		cout << "Dirija-se a piscina 03. \n";
	} else if (estiloNado==3 && idade<12){
		cout << "Dirija-se a piscina 04. \n";
	} else if (estiloNado==3 && idade>=12){
		cout << "Dirija-se a piscina 06. \n";
	} else {
		cout << "Você inseriu algum valor inválido, tente novamente. \n";
	}*/
	
	if (estiloNado==1){
		if (idade<=16){
			cout << "Dirija-se a piscina 01. \n";
		}else{
			cout << "Dirija-se a piscina 05. \n";
		}
	}else if (estiloNado==2){
		if (idade<=21){
			cout << "Dirija-se a piscina 02. \n";
		}else{
			cout << "Dirija-se a piscina 03. \n";
		}
	}else if (estiloNado==3){
		if (idade<12){
			cout << "Dirija-se a piscina 04. \n";
		}else{
			cout << "Dirija-se a piscina 06. \n";
		}
	} else{
		cout << "Você inseriu algum valor inválido, tente novamente. \n";
	}
	
	
	
	
	return 0;
}
