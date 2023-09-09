#include<iostream>
using namespace std;
/*
25. Write a program to show the concept of single inheritance by creating a class Student with 
data members RollNo, Class and Subject, that inherits the class Person with data members Name 
and Age and member functions that should be defined outside the class to initialize and display 
these information.
*/
class person {
    protected:
        char name[20];
        int age;
};
class student : protected person {
    int rollno,standard;
    char subject[20];
    public:
        void input();
        void display();
};
void student :: input(){
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"Enter your age : ";
    cin>>age;
    cout<<"Enter your class : ";
    cin>>standard;
    cout<<"Enter your roll no : ";
    cin>>rollno;
    cout<<"Enter your subject :";
    cin>>subject;
}
void student :: display(){
    cout<<"\n\n\t\tStudent Information\n";
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
    cout<<"Class : "<<standard<<endl;
    cout<<"Roll No : "<<rollno<<endl;
    cout<<"Subject : "<<subject<<endl;
}
int main () {
    student s1;
    s1.input();
    s1.display();
    return 0;
}