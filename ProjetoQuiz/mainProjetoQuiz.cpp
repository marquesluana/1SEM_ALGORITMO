#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	//Declara��o de vari�veis
	string nome;
	char resp, resptentar;
	int contacerto, conterro, pontos;
	
	//Atribui��o das vari�veis
	cout << "Qual o seu nome? \n";
	cin >> nome;
	
	do{
	contacerto = 0;
	conterro = 0;
		
	cout << "====== Ol� " << nome << " esse � o quiz sobre Bob Esponja!====== \n \n";
	
	cout << "Pergunta 1: \n Qual � o estado de nascimento da Sandy Bochechas? \n a) Calif�rnia \n b) Texas \n c) Arizona \n d) Alabama \n";
	cin >> resp;
	
	if (resp=='b' || resp=='B'){
		contacerto=contacerto+1;
		cout << "Parab�ns, voc� acertou!! \n \n";
	} else{
		conterro=conterro+1;
		cout << "Resposta errada! A resposta correta � b. Texas.\n \n";
	}
	
	cout << "Pergunta 2: \n Qual � o inimigo mortal do Seu Siriguejo? \n a) Patrick \n b) Bob Esponja \n c) Lula Molusco \n d) Plankton \n";
	cin >> resp;
	
	if (resp=='d' || resp=='D'){
		contacerto=contacerto+1;
		cout << "Parab�ns, voc� acertou!! \n \n";
	} else{
		conterro=conterro+1;
		cout << "Resposta errada! A resposta correta � d) Plankton.\n \n";
	}
	
	cout << "Pergunta 3: \n Qual � o nome da filha do Seu Siriguejo? \n a) P�rola \n b) Sandy \n c) Ametista \n d) Rose \n";
	cin >> resp;
	
	if (resp=='a' || resp=='A'){
		contacerto=contacerto+1;
		cout << "Parab�ns, voc� acertou!! \n \n";
	} else{
		conterro=conterro+1;
		cout << "Resposta errada! A resposta correta � a) P�rola. \n \n";
	}
	
	cout << "Pergunta 4: \n Qual � o nome do melhor amigo do Bob Esponja? \n a) Gary \n b) Sandy \n c) Patrick \n d) Pat \n";
	cin >> resp;
	
	if (resp=='c' || resp=='C'){
		contacerto=contacerto+1;
		cout << "Parab�ns, voc� acertou!! \n \n";
	} else{
		conterro=conterro+1;
		cout << "Resposta errada! A resposta correta � c) Patrick.\n \n";
	}
	
		cout << "Pergunta 5: \n Qual � o nome da professora da autoescola do Bob Esponja? \n a) Sra. Puff  \n b) Ploft \n c) Sra. Ball \n d) Sra. Rose \n";
	cin >> resp;
	
	if (resp=='a' || resp=='A'){
		contacerto=contacerto+1;
		cout << "Parab�ns, voc� acertou!! \n \n";
	} else{
		conterro=conterro+1;
		cout << "Resposta errada! A resposta correta � a).\n \n";
	}
	
	pontos = (contacerto*2)-conterro;
	
	cout << "\nVoc� acertou " << contacerto << " perguntas e errou " << conterro << ". \nSua pontua��o no quiz foi: " << pontos << " \n \n";
	cout << "Deseja tentar novamente? (S/N) \n";
	cin >> resptentar;
	}while(resptentar=='S' || resptentar=='s');
	
	cout << "===== FIM ===== \n";
	
	return 0;
}
