#include <iostream>
#include <stdlib.h>

using namespace std;
void sunValues(int a,int b);
void showVetorValues(string vet[]);

int main(int argc, char *argv[]){
    
    string tranps[4] ={"carro","aviao","matriz","vetor"};

    sunValues(4,5);

    showVetorValues(tranps);
    return 0;

}

void sunValues(int a, int b){

    cout << "resultado: "<<a+b<<endl;

}

void showVetorValues(string vet[]){
    for(int i=0;i<4;i++){
        cout << vet[i]<<endl;
    }
}