#include<iostream>
using namespace std;
long Factorial(int x);
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    cout<<"Factorial of "<<num<<" = "<<Factorial(num)<<endl;
    return 0;
}
long Fact(int x){
    long Fact = 1;
    for (int i = 1; i<=x; i++){
        Fact = Fact * i;
    }
    return Fact;
}