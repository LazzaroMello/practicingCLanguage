#include <iostream>
#include <stdlib.h>
#include<stdio.h>
using namespace std;



int main(){
    
    enum armas {fuzil=50,escopeta=15,revolver=30,rifle=20};

    //tipo/nomeVariavel
    armas guns;
    guns = fuzil;
   
    cout << guns<<endl;

}