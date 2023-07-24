#include<iostream>
using namespace std;
void factors(int x);
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    factors(n);
    return 0;
}
void factors(int x){
    int flag = 0;
    cout<<"Factors of "<<x<<":"<<endl;
    for (int i = 1; i<=x; i++){
        if (x%i == 0){
            cout<<i<<", ";
            flag++;
        }
    }
    cout<<endl;
    cout<<"Total number of Factors:"<<flag<<endl;
}