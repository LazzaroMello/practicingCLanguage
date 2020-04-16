#include <iostream>
#include <stack>

//Conceito de pilha:
    //Primeiro a entrar é o ultimo a sair
//Methodos:
    //Push() -> adiciona
    //pop() -> retira último
    //size() -> tamanho da pilha
    //enpty() -> retorna true se a pilha estiver vazia

int main(){

 std::stack<std::string> cartas;

 cartas.push("coringa");
 cartas.push("Rei");
 cartas.push("Ás de ouro");
 cartas.push("4 de fumo");

 std::cout << cartas.size()<<std::endl;
 std::cout<< cartas.top()<<std::endl;


 while(!cartas.empty()){
    cartas.pop();
 }

 if(cartas.empty()){
    std::cout << "Pilha vazia!\n"<<std::endl;
 }

 if(!cartas.size()){
    std::cout << "Pilha vazia!\n"<<std::endl;
 }

return 0;
 
}
