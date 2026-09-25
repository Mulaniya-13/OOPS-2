#include<iostream>
using namespace std;


//Compile Time polymorphism -- 1.)Function overloading 
class Print{
    public:
    void show(int x){
        cout<<"int: "<<x<<endl;
    }

    void show(string str){
        cout<<"String: "<<str<<endl;
    }
};

int main(){
    Print obj1;
    obj1.show(20);
    obj1.show("Aashish Mulaniya");
    return 0;
}
