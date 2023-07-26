#include<iostream>
using namespace std;
void check(int *x,int *y);
int main () {
    int num1,num2;
    cout<<"Enter a number:";
    cin>>num1;
    cout<<"Enter another number:";
    cin>>num2;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    cout<<"Numbers before swapping:\nFirst number:"<<num1<<endl<<"Second number:"<<num2<<endl;
    check(ptr1,ptr2);
    cout<<"Numbers after swapping:\nFirst number:"<<num1<<endl<<"Second number:"<<num2<<endl;
    return 0;
}
void check(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}