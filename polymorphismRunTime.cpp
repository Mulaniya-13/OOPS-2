#include<iostream>
using namespace std;


//Rum-Time Polymorphism -- 1.) Function Overridding
class Parent {
    public:
    void show(){
        cout<<"Parent show called..";
    }
};

class Child {
    public:
    void show(){
        cout<<"Child show called..";
    }
};
  


int main(){
    Child child1;
    child1.show();
    return 0;
}