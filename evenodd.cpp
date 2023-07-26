#include<iostream>
using namespace std;
string check(int a);
int main () {
    int num;
    cout<<"Enter a number:";
    cin>>num;
    cout<<"The given number is "<<check(num)<<endl;
    return 0;
}
string check(int a){
    if (a%2 == 0){
        return "even";
    } else {
        return "odd";
    }
}