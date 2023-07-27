#include<iostream>
using namespace std;
void calc(float x, float y);
int main(){
    float a,b;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    calc(a,b);
    return 0;
}
void calc(float x, float y){
    int opr;
    cout<<"1.Addition\n2.Substraction\n3.Multiplication\n4.Division\nEnter a operation that you want to perform:";
    cin>>opr;
    cout<<"RESULT:\n";
    switch (opr)
    {
    case 1:
        cout<<x<<" + "<<y<<" = "<<x+y;
        break;
    case 2:
        cout<<x<<" - "<<y<<" = "<<x-y;
        break;
    case 3:
        cout<<x<<" * "<<y<<" = "<<x*y;
        break;
    case 4:
        cout<<x<<" / "<<y<<" = "<<x/y;
        break;
    default:
        cout<<"Invalid operation!";
        break;
    }
}