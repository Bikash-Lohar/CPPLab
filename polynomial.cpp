#include<iostream>
#include<cmath>
using namespace std;
float solution (int x,int y,int n);
int main () {
    int x,y,n;
    float ans;
    cout<<"Enter the value of x:";
    cin>>x;
    cout<<"Enter the value of y:";
    cin>>y;
    cout<<"Enter the value of n:";
    cin>>n;
    ans = solution(x,y,n);//the result is not converting to float type even after typecasting
    cout<<"The answer of the equation-> (x^2 + n)/(y-1)^3 is "<<ans;
    return 0;
}
float solution (int x, int y, int n){
    float eqn = (pow(x,2) + n)/(pow(y-1,3));
    return eqn;
}