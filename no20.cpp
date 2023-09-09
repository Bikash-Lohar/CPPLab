#include<iostream>
using namespace std;
/*
Define a class to represent a bank account. Include the following members: -
 Data members-
 account holder name
 account number
 type of account
 initial balance
 Member functions-
 to assign initial values
 to deposit an amount
 to withdraw an amount after checking the balance
 to display account statement.
Write a main function in C++ to test the program.
*/
class bankAccount {
    char name[20],type;
    int balance;
    static int acno;
    public:
        void input();
        void deposit();
        void withdraw();
        void display();
};
int bankAccount :: acno = 1000000;
void bankAccount :: input(){
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"Savings Account -->S\nCurrent Account -->C\nEnter account type : ";
    cin>>type;
    cout<<"Enter initial balance : ";
    cin>>balance;
    acno++;
}
void bankAccount :: deposit(){
    int temp;
    cout<<"Enter amount to deposit : ";
    cin>>temp;
    balance += temp;
}
void bankAccount :: withdraw(){
    int temp;
    cout<<"Current balance : "<<balance<<endl;
    cout<<"Enter amount to withdraw : ";
    cin>> temp;
    if (temp <= balance){
        balance -= temp;
    } else {
        cout<<"insufficient balance in the account !\n";
    }
}
void bankAccount :: display(){
    cout<<"\t\t\tAccount statement\n\n";
    cout<<"Name : "<<name<<endl;
    cout<<"Account type : "<<type<<endl;
    cout<<"Account number : "<<acno<<endl;
    cout<<"Balance : "<<balance<<endl;
}
int main () {
    int choice;
    bankAccount account;
    cout<<"\n\t\tCREATE ACCOUNT:\n";
    account.input();
    do
    {
        cout<<"\n\n\t\t[1] DEPOSIT MONEY\n\t\t[2] WITHDRAW MONEY\n\t\t[3] DISPLAY BANK STATEMENT\n\t\t[4] EXIT\n\t\tENTER YOUR CHOICE : ";
        cin>>choice;
        switch (choice){
            case 1:
                account.deposit();
                break;
            case 2:
                account.withdraw();
                break;
            case 3:
                account.display();
                break;
            case 4:
                exit(0);
            default: 
                cout<<"Invalid operation !\n\n";
        }
    } while (choice != 4);
    return 0;
}