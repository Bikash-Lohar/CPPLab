#include<iostream>
using namespace std;
int sum(int n);
int main () {
    int num;
    cout<<"Enter a number:";
    cin>>num;
    cout<<"The sum of first "<<num<<" natural numbers: "<<sum(num);
    return 0;
}
int sum(int n){
    int add = 0;
    for (int i = 1; i<= n; i++){
        add+= i;
    }
    return add;
}