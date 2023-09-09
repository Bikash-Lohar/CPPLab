#include<iostream>
using namespace std;
/*
31. Write a program in C++ to illustrate the concept of unary operator overloading.
*/
class count {
    int value = 3;
    public:
        void operator ++(int){
            value += 5;
        }
        int show(){
            return value;
        }
};
int main () {
    count c1;
    cout<<"original value : "<<c1.show()<<endl;
    c1++;
    cout<<"The value after overlaoding : "<<c1.show()<<endl;
    return 0;
}