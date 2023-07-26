#include<iostream>
using namespace std;
void fibonacci(int n);
int main (){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    fibonacci(num);
    return 0;
}
void fibonacci(int n){
    int term1 = 0,term2 = 1,sum;
    cout<<"Fibonacci series upto term:"<<n<<endl;
    cout<<term1<<"\t"<<term2<<"\t";
    for (int i = 2; i<n; i++){
        sum = term1 + term2;
        cout<<sum<<"\t";
        term1 = term2;
        term2 = sum;
    }
}