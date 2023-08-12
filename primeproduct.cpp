#include<iostream>
using namespace std;
int prime (int n);
//can i return an array from a function ans no!
int main () {
    int num,ans;
    cout<<"Enter the term:";
    cin>>num;
    ans = prime(num);
    cout<<"The product is "<<ans;
    return 0;
}
int prime (int n){
    int i,j,product = 1,flag = 0;
    if (n <= 1){
        return 0;
    }
    cout<<"1 is not a prime number\n";
    for (i = 2; i<=n; i++){
        flag = 0;
        for (j = 2; j<i; j++){
            if (i%j == 0){
                flag = 1;
            }
        }
        if (flag == 1){
            cout<<i<<" is not a prime number!\n";
        } else {
            product *= i;
            cout<<i<<" is a prime number!\n";
        }
    }
    return product;
}
