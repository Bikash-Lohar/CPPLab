#include<iostream>
using namespace std;
void calc(int x, int y);
int main(){
    int a,b;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
}
void calc(int x, int y){
    int opr;
    cout<<"1.Addition\n2.Substraction\n3.Multiplication\n4.Division\nEnter the operation That you want to perform:";
    cin>>opr;
    switch (opr)
    {
    case 1:
        cout<<"Result:"<<x+y;
        break;
    case 2:
        cout<<"Result:"<<x-y;
        break;
    case 3:
        cout<<"Result:"<<x*y;
        break;
    case 4:
        cout<<"Result:"<<float(x/y);
        break;
    default:
        cout<<"Invalid operation!";
        break;
    }
}
