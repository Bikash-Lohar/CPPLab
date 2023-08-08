#include<iostream>
#include<cmath>
using namespace std;
long series (int a,int r,int n);
int main () {
    int a,r,n;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of r:";
    cin>>r;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"The answer is "<<series(a,r,n)<<endl;
    return 0;
}
long series (int a, int r ,int n){
    int sum = 0;
    for (int i = 0; i<=n; i++){
        sum += (a*pow(r,i));
    }
    return sum;
}