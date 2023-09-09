#include<iostream>
#include<cstring>
using namespace std;
/*
23. Implement the concept of constructor (simple, parameterized and copy) in a single C++ 
program.
*/
class student {
    int rollno;
    char name[20];
    public:
        student() : rollno(0),name("not available"){
            cout<<"\n\t\tSimple constructor is called\n\n";
        }
        student(int no, char n[]) {
            rollno = no;
            strcpy(name,n);
            cout<<"\n\t\tparameterized constructor is called\n\n";
        }
        student(student &s){
            rollno = s.rollno;
            strcpy(name,s.name);
            cout<<"\n\t\tcopy constructor is called\n\n";
        }
        void display () {
            cout<<"\n\t\tASSIGNED DATA\n";
            cout<<"Name : "<<name<<endl;
            cout<<"Roll no : "<<rollno<<endl;
        }
};
int main () {
    char name[20];
    int roll;
    student s1;
    s1.display();
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"enter your roll no : ";
    cin>>roll;
    student s2(roll,name);
    s2.display();
    student s3(s2);
    s3.display();
    return 0;
}