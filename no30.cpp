#include<iostream>
using namespace std;
// 30. Write a C++ program to illustrate the concept of static data member.
class objectcount{
    int data;
    static int count;
    public:
        void getdata(){
            cout<<"Enter data : ";
            cin>>data;
            count++;
            data++;
        }        
        void showdata(){
            cout<<"data : "<<data<<endl;
            cout<<"OBJECT COUNT : "<<count<<endl;
        }
};
int objectcount :: count;
int main () {
    int num;
    objectcount obj[20];
    cout<<"Enter number of data elements : ";
    cin>>num;
    for (int i = 0; i<num; i++){
        obj[i].getdata();
    }
    obj[0].showdata();
    return 0;
}