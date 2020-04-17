#include <iostream>
#include <list>
#define TAM 10

//concepts of list:
    //u can choose the position of the list to  put a value.
//methods:
    // push_front -> add a value in the beginner
    //push_back -> add a value in the back
    //sort -> put order to the lis
    //reverse -> reverse the list
    //iterator ->used to put a value  anywhere of the list 

int main(){

    std::list <int> aula;
    std::list<int>::iterator iterator;

   for(int i=0;i<TAM;i++){
       aula.push_front(i);
   }
 
   
    iterator = aula.begin();
    advance(iterator,5);
    aula.insert(iterator,0);


   for(int i=0;aula.size();i++){
      std::cout<< aula.front() <<std::endl;
      aula.pop_front();
   }
    
    return 0;
}
    