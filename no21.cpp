#include<iostream>
using namespace std;
/*
21. Define a class ‘student’ whose:
 Data members are- i. name ii. roll No iii. marks (5 Subjects)
 Member functions are- i. input() ii. totalmarks() iii. display()
Write a main function in C++ to test the program.
*/
class student {
    char name[20];
    int rollno,marks[5];
    public:
        void input();
        int totalmarks();
        void display();
};
void student :: input(){
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"Enter your rollno : ";
    cin>>rollno;
    cout<<"Enter your marks : \n";
    for (int i = 0; i<5; i++){
        cout<<"subject "<<i+1<<" : ";
        cin>>marks[i];
    }
}
int student :: totalmarks(){
    int sum = 0;
    for (int i = 0; i<5; i++){
        sum += marks[i];
    }
    return sum;
}
void student :: display(){
    cout<<"\n\n\t\tSTUDENT INFORMATION\n";
    cout<<"\t\tNAME : "<<name<<endl;
    cout<<"\t\tROLL NO : "<<rollno<<endl;
    cout<<"\t\tTOTAL MARKS : "<<totalmarks()<<endl;
}
int main () {
    student s1;
    s1.input();
    s1.display();
    return 0;
}