#include <iostream>
#include <stdlib.h>
#include<stdio.h>
 

int fatorial(int num);
int fibonacci(int num);
int somaDeAte(int num,int num2);

int main(){

   int firstValue, secondValue;

   //fatorial
   int values = fatorial(4);
   std::cout<<"Fatorial: "<<values<<std::endl;

    //fibonacci
    for(int i = 5; i >= 0 ; i--){
       std::cout << fibonacci(i)<<std::endl;
    }
    
    //soma numeros dado um intervalo
    std::cout << "Enter with a number: ";
    std::cin >>firstValue;
    std::cout<<"Enter wih another number: ";
    std::cin >>secondValue;

    int sum = somaDeAte(firstValue,secondValue);
    printf("Sum of %d with %d is = %d\n",firstValue,secondValue,sum);

return 0;
}

int somaDeAte(int a,int b){

    if(a==b){
        return a;
    }else{
        return a + somaDeAte(a+1,b);
    }

}

int fibonacci(int num){
    if(num==0 || num==1){
        return num;
    }else{
        return fibonacci(num-1) + fibonacci(num-2);
    }

}

int fatorial(int num){
    if(num==0){
        return 1;
    }else{
        return num * fatorial(num-1);
    }
}

 
