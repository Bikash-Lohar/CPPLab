#include<iostream>
using namespace std;
int diff (int A[], int x);
int main () {
    int n;
    cout<<"Entet the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements:\n";
    for (int i = 0; i<n; i++){
        cout<<"A["<<i<<"] = ";//if i change i to i+1 will it affect the value of i in the loop 
        cin>>arr[i];
    }
    cout<<"The answer is "<<diff(arr,n);
    return 0;
}
int diff (int A[], int x){
    int evensum = 0,oddsum = 0;
    for (int i = 0; i< x; i++){
        if (i%2 == 0){
            evensum += A[i];
        } else {
            oddsum += A[i];
        }
    }
    return evensum-oddsum;
}