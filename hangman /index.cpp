#include <iostream>
#include <stdlib.h>
using namespace std;

//Jogo feito APENAS com conceitos BASICOS da linguagem

int main(){

	char palavra[50],tentativa,secreta[10];
	int tam=0,i=0,chances=6,acertos=0;
	bool acerto=false;

	cout << "Entre com a palavra secreta: ";
	cin >> palavra;

  system("clear");

	while(palavra[i]!='\0'){
			i++;
			tam++;
	}

	for(int i =0; i<10;i++){
			secreta[i] = '*'; 
	}

	while(chances > 0 && acertos < tam){
		cout <<"Chances restantes: " <<chances <<endl;
		cout << "Palavra secreta";

		for(int i=0;i<tam;i++){
			cout << secreta[i];
		}

    cout <<"Entre com uma letra: "<<"\n";
		cin >>tentativa;

		for(int i=0;i<tam;i++){
			if(palavra[i]==tentativa){
	
				 secreta[i]=palavra[i];
				 acerto = true;
				 acertos++;
			}
		}

		if(!acerto){
			chances--;
		}

		acerto = false;
		system("clear");
		if(acertos==tam) {
			cout << "Voce venceu"<<endl;

		}else{
			cout << "Voce perdeu"<<endl;
		}
	}
 
}