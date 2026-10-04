#include<iostream>
using namespace std;


//Static member variable: A static member variable is shared by all objects of the class. It is not tied to any specific object, and it retains its value across all instances of the class. Static member variables are declared using the 'static' keyword and are typically used to store data that is common to all objects of the class.
//Static member function: A static member function is a function that can be called on the class itself, rather than on an instance of the class. It can only access static member variables and other static member functions. Static member functions are declared using the 'static' keyword and are typically used for operations that do not require access to instance-specific data.
// void counter(){ //Static member function
//     static int count=0;
//     count++;
//     cout<<"Count: "<<count<<endl;
// }

class Example { //Static member class
    public:
    static int count; // static member variable
};

int Example::count=0; // static member variable initialization



int main(){
    // counter();
    // counter();
    // counter();

    Example e1;
    Example e2;
    Example e3;

    cout<<e1.count++<<endl; // accessing static member variable using object
    cout<<e2.count++<<endl; // accessing static member variable using object
    cout<<e3.count++<<endl; // accessing static member variable using object
    return 0;
}