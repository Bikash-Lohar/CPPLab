#include<iostream>
using namespace std;
class vehicle {
    char name[20], color[20];
    int wheels, price;
    public:
    void input( );
    void display( );
};
void vehicle :: input(){
    cout<<"\n\nENTER CAR INFORMATION\n\n";
    cout<<"Enter the name of the vehicle : ";
    cin>>name;
    cout<<"Enter the colour of the vehicle : ";
    cin>>color;
    cout<<"Enter number of wheels in the vehicle : ";
    cin>>wheels;
    cout<<"Enter the price of the vehicle : ";
    cin>>price;
}
void vehicle :: display(){
    cout<<"NAME : "<<name<<endl;
    cout<<"COLOUR : "<<color<<endl;
    cout<<"WHEELS : "<<wheels<<endl;
    cout<<"PRICE : "<<price<<endl;
}
int main () {
    int num;
    cout<<"Enter number of vehicle for which you want to store data : ";
    cin>>num;
    vehicle v1[num];
    for (int i =0; i<num; i++){
        cout<<"\n\nRecord no : "<<i+1;
        v1[i].input();
    }
    cout<<"\n\n\t\t\tCAR RECORDS : ";
    for (int i = 0; i<num; i++){
        cout<<"\n\n";
        v1[i].display();
    }
    return 0;
}