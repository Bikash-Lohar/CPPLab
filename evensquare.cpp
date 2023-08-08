#include<iostream>
#include<cmath>
using namespace std;
int evensum(int n);
int main () {
    int num,sum;
    cout<<"Enter a upper range for finding the sum:";
    cin>>num;
    sum = evensum(num);
    cout<<"The answer to the sum of square of the first "<<num<<" numbers is "<<sum<<endl;
    return 0;
}
int evensum (int n){
    int add = 0;
    for (int i = 1; i<=n; i++){
        if (i%2 == 0){
            cout<<"even number = "<<i<<endl;
            add += pow(i,2);
            cout<<"add = "<<add<<endl;
        }
    }
    return add;
}