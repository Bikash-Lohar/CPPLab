#include<iostream>
using namespace std;
#define SIZE 5
int smallest(int A[]);
int largest(int A[]);
int main(){
    int arr[SIZE];
    cout<<"Enter the array elements:\n";
    for (int i = 0; i<SIZE; i++){
        cin>>arr[i];
    }
    cout<<"The smallest element:"<<smallest(arr)<<endl;
    cout<<"The largest element:"<<largest(arr)<<endl;
    return 0;
}
int smallest(int A[]){
    int min = A[0];
    for (int i = 1; i<SIZE; i++){
        if (A[i]<min){
            min = A[i];
        }
    }
    return min;
}
int largest(int A[]){
    int max = A[0];
    for (int i = 1; i<SIZE; i++){
        if (A[i]>max){
            max = A[i];
        }
    }
    return max;
}