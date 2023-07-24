#include<iostream>
using namespace std;
float calc(int x, int y);
int main(){
    int a,b;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    cout<<"RESULT:"<<calc(a,b);
}
float calc(int x, int y){
    int opr;
    int div;
    cout<<"1.Addition\n2.Substraction\n3.Multiplication\n4.Division\nEnter the operation That you want to perform:";
    cin>>opr;
    switch (opr)
    {
    case 1:
        return x+y;
        break;
    case 2:
        return x-y;
        break;
    case 3:
        return x*y;
        break;
    case 4:
        div = float(x/y);
        cout<<div;
        return div;
        break;
    default:
        cout<<"Invalid operation!";
        break;
    }
}