#include<iostream>
using namespace std;
// 32. Write a program in C++ to illustrate the concept of binary operator overloading.
class complex{
    int real,imag;
    public:
        complex(){
            real = 0;
            imag = 0;
        }
        complex(int r,int i){
            real = r;
            imag = i;
        }
        complex operator +(complex a){
            complex temp;
            temp.real =real + a.real;
            temp.imag = imag + a.imag;
            return temp;
        }
        void display (){
            cout<<real<< " + "<<imag<<"i"<<endl;
        }

};
int main () {
    complex c1(2,3),c2(3,4);
    cout<<"C 1 : ";
    c1.display();
    cout<<"C 2 : ";
    c2.display();
    complex c3 = c1 + c2;
    cout<<"C 3 : ";
    c3.display();
    return 0;
}