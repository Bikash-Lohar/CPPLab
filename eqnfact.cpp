#include<iostream>
using namespace std;
double factorial (int x);
float solution (int n, int r);
int main () {
    int n,r;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"ENter the value of r:";
    cin>>r;
    cout<<"The answer to the equation"
                "n!/r!.(n-r)!"
                "= "<<solution(n,r)<<endl;
    return 0;
}   
double factorial (int x){
    double fact = 1;
    for (int i = 2; i<=x; i++){
        fact *= i;
    }
    return fact;
}
float solution (int n, int r){
    float eqn = factorial(n)/(factorial(r)*factorial(n-r));
    return eqn;
}