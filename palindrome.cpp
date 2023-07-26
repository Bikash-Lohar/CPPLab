#include<iostream>
using namespace std;
void palindrome(int n);
int main () {
    int num;
    cout<<"Enter a number:";
    cin>>num;
    palindrome(num);
    return 0;
}
void palindrome(int n){
    int rev = 0,temp,flag;
    flag = n;
    while (n != 0){
        temp = n%10;
        rev = (rev*10) + temp;
        n = n/10;
    }
    cout<<"The reverse of the given number is:"<<rev<<endl;
    if ( rev == flag){
        cout<<"The given number is a palindrome!";
    } else {
        cout<<"The given number is not a palindrome!";
    }
}