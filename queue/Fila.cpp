#include <iostream>
#include <queue>


//concepts of queue:
    //first to get in is the first to get out!
//Methods:
    //empty -> case the queue is empty then return true!
    //size -> return the size of queue!
    //front -> return the first element of the queue
    //back -> return the last element
    //push -> add new elements to the queue
    //pop -> the element is 'deleted';
     

int main(){

std::queue<std::string> fila;

 fila.push("coringa");
 fila.push("Rei");
 fila.push("Ás de ouro");
 fila.push("4 de fumo");

 std::cout << fila.size()<<std::endl;
 

 while(!fila.empty()){

    std::cout<< "Primeira fila: " <<fila.front() <<std::endl;
    std::cout<< "Ultimo da fila : " <<fila.back() <<std::endl;
    fila.pop();
    
 }

    return 0;
}