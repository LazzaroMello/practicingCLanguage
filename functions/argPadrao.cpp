#include <iostream>
#include <stdlib.h>

using namespace std;

void  print(string text = "Valor padrão");

int main(int argc, char *argv[]){
 print();
}

void  print(string text){
    cout <<text<<endl;
}