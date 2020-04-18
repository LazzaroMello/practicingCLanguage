#include <iostream>
  
struct Aluno{

    std::string nome;
    std::string curso;
    int numMatricula;
     

    void showInfo(){
        std::cout<<"Nome: "<<nome<<std::endl;
        std::cout<<"Curso"<<curso<<std::endl;
        std::cout<<"Registration Number"<<numMatricula<<std::endl;
        std::cout<<"\n";
    }
};

int main(int argc, char *argv[]){
    int studentsNumber = 2;
    Aluno alunos[studentsNumber];

    for(int i = 0; i < studentsNumber; i++){

        std::cout<<"Name: ";
        std::cin>>alunos[i].nome;
        std::cout<<"Course: ";
        std::cin>>alunos[i].curso;
        std::cout<<"Registration Number: ";
        std::cin>>alunos[i].numMatricula;

    }
    for(int i =0 ;i<studentsNumber;i++){
        alunos[i].showInfo();
    }
    return 0;
 
}