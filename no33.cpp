#include<iostream>
using namespace std;
/*
33. Write a program in C++ to calculate the area of rectangle, triangle and circle using virtual 
functions.
*/
class area {
    protected:
    int length,width,rad;
    float base,height,pi = 22.0/7.0;

    public:
    void rectangle (){
        cout<<"Base class\n";
        cout<<"\t\t\tArea of rectangle : \n";
        cout<<"Enter Length : ";
        cin>>length;
        cout<<"Enter Width : ";
        cin>>width;
        cout<<"The area of the rectangle is "<<length * width<<endl;
    }
    virtual void triangle(){
        cout<<"Base class\n";
        cout<<"\t\t\tArea of triangle : \n";
        cout<<"Enter Base : ";
        cin>>base;
        cout<<"Enter Height : ";
        cin>>height;
        cout<<"The area of the triangle is "<<((base * height)/2.0)<<endl;
    }
    void circle (){
        cout<<"Base class\n";
        cout<<"\t\t\tArea of circle : \n";
        cout<<"Enter Radius : ";
        cin>>rad;
        cout<<"The area of the circle is "<<(pi * rad * rad)<<endl;
    }
};
class derived : public area {
    protected:
    void rectangle (){
        cout<<"Derived class\n";
        cout<<"\t\t\tArea of rectangle : \n";
        cout<<"Enter Length : ";
        cin>>length;
        cout<<"Enter Width : ";
        cin>>width;
        cout<<"The area of the rectangle is "<<length * width<<endl;
    }
    void triangle(){
        cout<<"Derived class\n";
        cout<<"\t\t\tArea of triangle : \n";
        cout<<"Enter Base : ";
        cin>>base;
        cout<<"Enter Height : ";
        cin>>height;
        cout<<"The area of the triangle is "<<((base * height)/2.0)<<endl;
    }
    void circle (){
        cout<<"Derived class\n";
        cout<<"\t\t\tArea of circle : \n";
        cout<<"Enter Radius : ";
        cin>>rad;
        cout<<"The area of the circle is "<<(pi * rad * rad)<<endl;
    }
};
int main () {
    area *shape;
    derived d;
    shape = &d;
    shape->rectangle();
    shape->triangle();
    shape->circle();
    return 0;
}