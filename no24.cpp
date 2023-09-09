#include<iostream>
#include<cstring>
using namespace std;
/*
24. Write a program that defines a class ITEM with data members ItemID, ItemName, Qty and 
Price. Define a constructor that initializes Qty and Price with a default value and another 
constructor that initializes ItemID and ItemName by taking values as arguments. Define a 
member function that should be defined outside the class to display the values of all the data 
members.
*/
class item {
    int itemId;
    float qty,price;
    char itemName[20];
    public:
        item () : qty(1),price (25.50){}
        item (int id, char name[]){
            item();
            itemId = id;
            strcpy(itemName,name);
        }
        void display();
};
void item :: display(){
    cout<<"Item ID : "<<itemId<<endl;
    cout<<"Item Name : "<<itemName<<endl;
    cout<<"Item Quantity : "<<qty<<endl;
    cout<<"Item price : "<<price<<endl;
}
int main () {
    item itemno1;
    cout<<"Item information\n";
    itemno1.display();
    int id;
    char temp[20];
    cout<<"Enter ID : ";
    cin>>id;
    cout<<"Enter Name : ";
    cin>>temp;
    item itemno2(id,temp);
    itemno2.display();
    return 0;
}