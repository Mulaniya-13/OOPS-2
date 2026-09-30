#include<iostream>
using namespace std;


//abstract class
class Shape {
    public:
    virtual void draw()=0; //abstract fnx. , pure virtual function
};

class Circle : public Shape {
    public:
    void draw(){
        cout<<"draw circle\n";
    } 
};

class Square : public Shape {
    public:
    void draw(){
        cout<<"draw square\n";
    }
};

int main(){
    Circle c1;
    c1.draw();

    Square s1;
    s1.draw();
    return 0;
}