#include<iostream>
using namespace std;
//22. Write a C++ program to create a class ‘triangle’ and find its perimeter and area.
class triangle{
    int a,b,c,height;
    public:
        void perimeter(){
            cout<<"Enter first side : ";
            cin>>a;
            cout<<"Enter second side : ";
            cin>>b;
            cout<<"Enter third side : ";
            cin>>c;
            cout<<"Perimeter of triangle : "<<a + b + c<<endl;
        }
        void area (){
            cout<<"Enter base : ";
            cin>>b;
            cout<<"Enter height : ";
            cin>>height;
            cout<<"Area of the triangle : "<<(b * height)/2.0<<endl;
        }
};
int main () {
    triangle t1;
    t1.perimeter();
    t1.area();
    return 0;
}