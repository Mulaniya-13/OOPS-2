#include<iostream>
using namespace std;


//Compile Time polymorphism -- 1.)Function overloading 
// class Print{
//     public:
//     void show(int x){
//         cout<<"int: "<<x<<endl;
//     }

//     void show(string str){
//         cout<<"String: "<<str<<endl;
//     }
// };

// int main(){
//     Print obj1;
//     obj1.show(20);
//     obj1.show("Aashish Mulaniya");
//     return 0;
// }

//Compile Time Polymorphism -- 2.) Operator overloading
class Complex{
    int real;
    int img;
    
    public:
    Complex(int r,int i){
        real=r;
        img=i;
    }

    void showNum(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }

    Complex operator + (Complex &c2){
        int resReal=this->real + c2.real;
        int resImg=this->img + c2.img;
        Complex c3(resReal,resImg);
        return c3;
    }
};


int main(){
    Complex c1(2,4);
    Complex c2(3,2);


    c1.showNum();
    c2.showNum();

    Complex c3= c1+c2;
    c3.showNum();

    return 0;
}