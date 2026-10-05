#include<iostream>
using namespace std;

class A {
    public:
    A(){
        std::cout<<"Constructor of class A"<<std::endl;
    }
    ~A(){
        std::cout<<"Destructor of class A"<<std::endl;
    }
};

class B : public A { // Class B inherits from class A
    public:
    B(){
        std::cout<<"Constructor of class B"<<std::endl;
    }
    ~B(){
        std::cout<<"Destructor of class B"<<std::endl;
    }
};

int main(){
    B obj;
    return 0;
}