#include <iostream>

int main(){

    std::string name;
    std::string *pointer = &name;

    *pointer = "Jhon"; //no endereço apontado por pointer adicione o valor "Jhon"
    std::cout<<"Pointer Value: "<<*pointer<<std::endl;
    
    return 0;
}