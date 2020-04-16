#include <iostream>
#include <string.h>
 
using namespace std;

int main(int argc, char *argv[]){

    //se as string forem iguais, retorna 0
    if(argc > 1) {
       if(!strcmp(argv[1],"sol")){
           cout <<"Vou ao clube"<<endl;
       }else if(!strcmp(argv[1],"nublado")){
           cout <<"Vou ir ao cinema"<<endl;
        }else{
           cout <<"ficarei em casa"<<endl;
        }
    }else{
        cout <<"Nao sei o que farei ainda"<<endl;
    }
}