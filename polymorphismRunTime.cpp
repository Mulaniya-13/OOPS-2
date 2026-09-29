#include<iostream>
using namespace std;


//Rum-Time Polymorphism -- 1.) Function Overridding
// class Parent {
//     public:
//     void show(){
//         cout<<"Parent show called..";
//     }
// };

// class Child : public Parent{
//     public:
//     void show(){
//         cout<<"Child show called..";
//     }
// };
  


// int main(){
//     Child child1;
//     child1.show();
//     return 0;
// }


//Run Time polymorphism -- 2.) Virtual Functions
class Parent {
    public:
    void show(){
        cout<<"Parent show called..";
    }

    virtual void hello(){
        cout<<"Parent Hello";
    }
};

class Child : public Parent {
    public:
    void show(){
        cout<<"Child show called..";
    }

    void hello(){
        cout<<"Child Hello";
    }
};
  


int main(){
    Child child1;
    Parent *ptr;

    ptr=&child1; // Run time binding
    ptr->hello(); // virtual function
    return 0;
}