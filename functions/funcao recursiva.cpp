#include <iostream>
#include <stdlib.h>

using namespace std;
void contador(int num);
void contador2(int num,int cont = 0 );
int main(int argc, char *argv[]){

    contador(10);
    contador2(50);

}


void contador2(int num, int cont){
    cout <<cont<<endl;
    if(num > cont)contador2(num,++cont);

}

void contador(int num){
    for(int i =0;i<=num;i++){
        cout << i<<endl;
    }
}

 