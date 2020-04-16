#include <iostream>

using namespace std;

int main(){

  int vet[2];
  vet[0] = 2;
  vet[1] = 4;

  for (int i = 0; i < sizeof(vet)/4; i++){
    cout << "Entre com um valor: ";
    cin >> vet[i];
  }

  cout <<"Vetor:";
  for (int i = 0; i < sizeof(vet)/4; i++){
    cout <<vet[i]<<" ";
  }

}