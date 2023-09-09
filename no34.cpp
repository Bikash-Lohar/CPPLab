#include<iostream>
using namespace std;
/*
34. Write a program in C++ to illustrate the concept of virtual base class.
*/
class student {
    protected:
        int roll;
        char name[20];
        public:
            void student_input(){
                cout<<"Enter your name : ";
                cin>>name;
                cout<<"Enter your roll no : ";
                cin>>roll;
            }
            void student_display(){
                cout<<"Name : "<<name<<endl;
                cout<<"Roll no : "<<roll<<endl;
            }
};
class test : virtual protected student{
    protected:
    int dbms,oops;
    public:
        void test_input(){
                cout<<"Enter marks of DBMS : ";
                cin>>dbms;
                cout<<"Enter marks of OOPs : ";
                cin>>oops;
            }
            void test_display(){
                cout<<"DBMS : "<<dbms<<endl;
                cout<<"OOPs : "<<oops<<endl;
            }
};
class sports : virtual protected student {
    protected:
    int score;
    public:
        void sports_input(){
                cout<<"Enter sports score : ";
                cin>>score;
            }
            void sports_display(){
                cout<<"Sports score : "<<score<<endl;
            }
};
class result : protected test, protected sports {
    int total = 0;
    public:
        void result_input(){
            student_input();
            test_input();
            sports_input();
            total = dbms + oops + score;
        }
        void result_display(){
            student_display();
            test_display();
            sports_display();
            cout<<"Total score : "<<total<<endl;
        }
};
int main () {
    result r1;
    r1.result_input();
    cout<<"\n\t\t\tResult\n";
    r1.result_display();
    return 0;
}