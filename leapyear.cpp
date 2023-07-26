#include<iostream>
using namespace std;
void leapyear(int year);
int main () {
    int num;
    cout<<"Enter year(1-3000):";
    cin>>num;
    leapyear(num);
    return 0;
}
void leapyear(int year){
    if (year%4 == 0){
        cout<<"The given year is a leapyear!";
    } else {
        cout<<"The given year is not a leapyear!";
    }
}