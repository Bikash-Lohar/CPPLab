#include<iostream>
using namespace std;
/*
26. Write a program to find the largest and smallest of ten given numbers using private inline 
member functions, and also display all the numbers using member function that should be 
defined outside the class.
*/
class numbers{
    int num[10];
    inline int largest(){
        int max = num[0];
        for (int i = 1; i<10; i++){
            if (max<num[i]){
                max = num[i];
            }
        }
        return max;
    }
    inline int smallest(){
        int min = num[0];
        for (int i = 1; i<10; i++){
            if (min>num[i]){
                min = num[i];
            }
        }
        return min;
    }
    public:
        void inputnum();
        void displaynum();
};
void numbers :: inputnum(){
    cout<<"Enter the array elements:\n";
    for (int i = 0; i<10; i++){
        cout<<"A["<<i+1<<"] = ";
        cin>>num[i];
    }
}
void numbers :: displaynum(){
    cout<<"Elements in the array:\n";
    for (int i = 0; i<10; i++){
        cout<<"A["<<i+1<<"] = "<<num[i]<<endl;
    }
    cout<<"Largest element in the array is "<<largest()<<endl;
    cout<<"Smallest element in the array is "<<smallest()<<endl;
}
int main () {
    numbers n1;
    n1.inputnum();
    n1.displaynum();
    return 0;
}