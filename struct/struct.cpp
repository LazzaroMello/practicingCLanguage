#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

struct Car{

    int velMax;
    std::string model;
    std::string color;

    void insert(std::string modelo, std::string cor, int vel ){
       model = modelo;
       color = cor;
       velMax = vel;
    }

    void showCarsDetais(){
        std::cout<<color<<std::endl;
        std::cout<<model<<std::endl;
        std::cout<<velMax<<std::endl;
    }

};

int main(int argc, char *argv[]){

    Car secondCar;
    Car firstCar;

    firstCar.insert("ferrari","Preto",120 );
    secondCar.insert("Gol","Red",200 );
     
    firstCar.showCarsDetais();
    secondCar.showCarsDetais();

    return  0;

 
}