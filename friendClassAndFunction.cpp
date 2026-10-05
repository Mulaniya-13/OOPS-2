#include<iostream>
#include<string>
using namespace std;

class A {
    string secret="Secret data";
    friend class B; // Declaring class B as a friend of class A allows B to access private members of A.
    friend void revealSecret(A &obj); // Declaring the function revealSecret as a friend of class A allows it to access private members of A.
};

class B { // Friend class of class A
    public:
    void showSecret(A &obj){
        cout<<obj.secret<<endl; // This line will cause a compilation error because 'secret' is a private member of class A and cannot be accessed directly by class B. To fix this, you can declare class B as a friend of class A, allowing it to access private members of A.
    }
};

void revealSecret(A &obj){
    cout<<obj.secret<<endl; // This line will cause a compilation error because 'secret' is a private member of class A and cannot
}

int main(){
    A a1;
    B b1;
    b1.showSecret(a1); // This will cause a compilation error due to access violation of private member 'secret' in class A.
    revealSecret(a1); // This will also cause a compilation error due to access violation of private member 'secret' in class A.
    return 0;
}