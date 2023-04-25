#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	//Declaração de variáveis
	string nome;
	char resp, resptentar;
	int contacerto, conterro, pontos;
	
	//Atribuição das variáveis
	cout << "Qual o seu nome? \n";
	cin >> nome;
	
	do{
	contacerto = 0;
	conterro = 0;
		
	cout << "====== Olá " << nome << " esse é o quiz sobre Bob Esponja!====== \n \n";
	
	cout << "Pergunta 1: \n Qual é o estado de nascimento da Sandy Bochechas? \n a) Califórnia \n b) Texas \n c) Arizona \n d) Alabama \n";
	cin >> resp;
	
	if (resp=='b' || resp=='B'){
		contacerto=contacerto+1;
		cout << "Parabéns, você acertou!! \n \n";
	} else{
		conterro=conterro+1;
		cout << "Resposta errada! A resposta correta é b. Texas.\n \n";
	}
	
	cout << "Pergunta 2: \n Qual é o inimigo mortal do Seu Siriguejo? \n a) Patrick \n b) Bob Esponja \n c) Lula Molusco \n d) Plankton \n";
	cin >> resp;
	
	if (resp=='d' || resp=='D'){
		contacerto=contacerto+1;
		cout << "Parabéns, você acertou!! \n \n";
	} else{
		conterro=conterro+1;
		cout << "Resposta errada! A resposta correta é d) Plankton.\n \n";
	}
	
	cout << "Pergunta 3: \n Qual é o nome da filha do Seu Siriguejo? \n a) Pérola \n b) Sandy \n c) Ametista \n d) Rose \n";
	cin >> resp;
	
	if (resp=='a' || resp=='A'){
		contacerto=contacerto+1;
		cout << "Parabéns, você acertou!! \n \n";
	} else{
		conterro=conterro+1;
		cout << "Resposta errada! A resposta correta é a) Pérola. \n \n";
	}
	
	cout << "Pergunta 4: \n Qual é o nome do melhor amigo do Bob Esponja? \n a) Gary \n b) Sandy \n c) Patrick \n d) Pat \n";
	cin >> resp;
	
	if (resp=='c' || resp=='C'){
		contacerto=contacerto+1;
		cout << "Parabéns, você acertou!! \n \n";
	} else{
		conterro=conterro+1;
		cout << "Resposta errada! A resposta correta é c) Patrick.\n \n";
	}
	
		cout << "Pergunta 5: \n Qual é o nome da professora da autoescola do Bob Esponja? \n a) Sra. Puff  \n b) Ploft \n c) Sra. Ball \n d) Sra. Rose \n";
	cin >> resp;
	
	if (resp=='a' || resp=='A'){
		contacerto=contacerto+1;
		cout << "Parabéns, você acertou!! \n \n";
	} else{
		conterro=conterro+1;
		cout << "Resposta errada! A resposta correta é a).\n \n";
	}
	
	pontos = (contacerto*2)-conterro;
	
	cout << "\nVocê acertou " << contacerto << " perguntas e errou " << conterro << ". \nSua pontuação no quiz foi: " << pontos << " \n \n";
	cout << "Deseja tentar novamente? (S/N) \n";
	cin >> resptentar;
	}while(resptentar=='S' || resptentar=='s');
	
	cout << "===== FIM ===== \n";
	
	return 0;
}
