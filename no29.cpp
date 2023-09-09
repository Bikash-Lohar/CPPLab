#include<iostream>
using namespace std;
/*
29. Write a program in C++ to swap two numbers using the call by reference method and the 
call by value method. Also, display the numbers before and after using the methods
*/
void callByValue (int x, int y);
void callByReference (int &x, int &y);
int main () {
    int a,b;
    cout<<"Enter the value of A : ";
    cin>>a;
    cout<<"Enter the value of B : ";
    cin>>b;
    cout<<"Using call by value method for swapping !\n";
    cout<<"The value before swapping:\n"<<a<<endl<<b<<endl;
    callByValue(a,b);
    cout<<"Using call by reference method for swapping !\n";
    cout<<"The value before swapping:\n"<<a<<endl<<b<<endl;
    callByReference(a,b);
    cout<<"The values after swapping:\nA = "<<a<<endl<<"B = "<<b<<endl;
    return 0;
}
void callByValue (int x, int y){
    int temp ;
    temp = x;
    x = y;
    y = temp;
    cout<<"The values after swapping:\nA = "<<x<<endl<<"B = "<<y<<endl;
}
void callByReference (int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}