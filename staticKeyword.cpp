#include<iostream>
using namespace std;


//Static member variable: A static member variable is shared by all objects of the class. It is not tied to any specific object, and it retains its value across all instances of the class. Static member variables are declared using the 'static' keyword and are typically used to store data that is common to all objects of the class.
//Static member function: A static member function is a function that can be called on the class itself, rather than on an instance of the class. It can only access static member variables and other static member functions. Static member functions are declared using the 'static' keyword and are typically used for operations that do not require access to instance-specific data.
//Static member class: A static member class is a nested class that is declared as static within an outer class. It can be instantiated without an instance of the outer class and can access only static members of the outer class. Static member classes are typically used to group related functionality together and to provide a way to encapsulate data and behavior that is not tied to any specific instance of the outer class.
//Static Object: A static object is an object that is created with static storage duration, meaning it exists for the lifetime of the program. Static objects are typically used to store data that needs to persist across function calls or to implement singleton patterns. They are declared using the 'static' keyword and are typically initialized at the point of declaration.

// void counter(){ //Static member function
//     static int count=0;
//     count++;
//     cout<<"Count: "<<count<<endl;
// }

// class Example { //Static member class
//     public:
//     static int count; // static member variable
// };

// int Example::count=0; // static member variable initialization


class Example {  //Static object
    public:
    
    Example(){
            cout<<"Constructor called\n";
        }

    ~Example(){
            cout<<"Destructor called\n";
        }    
};



int main(){
    // counter();
    // counter();
    // counter();

    // Example e1;
    // Example e2;
    // Example e3;

    // cout<<e1.count++<<endl; // accessing static member variable using object
    // cout<<e2.count++<<endl; // accessing static member variable using object
    // cout<<e3.count++<<endl; // accessing static member variable using object

    int a= 0;
    if(a==0){
        static Example e1; // static object
    }
    cout<<"End of code..\n";
    return 0;
}