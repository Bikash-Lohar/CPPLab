#include<iostream>
using namespace std;
/*
28. Write a program that defines a class Play with the following specifications: 
private members:
Playcode integer
PlayTitle 25 character
Duration float
Noofscenes integer
public member:
• A constructor function to initialise Duration as 30 and Noofscence as 5.
• Newplay( ) function to accept values for Playcode and PlayTitle.
• Moreinfo( ) function to assign the values of Duration and Noofscenes with the help of 
corresponding values passed as parameters to this function.
• Showplay() function displays all the data members on the screen.
*/
class play {
    int playcode,no_of_scenes;
    char playtitle[25];
    float duration;
    public:
        play(){
            duration = 30;
            no_of_scenes = 5;
        }
        void newplay(){
            cout<<"Enter playcode : ";
            cin>>playcode;
            cout<<"Enter Title : ";
            cin>>playtitle;
        }
        void moreinfo(int d, int s){
            duration = d;
            no_of_scenes = s;
        }
        void showplay (){
            cout<<"\t\t\tPLAYER INFORMATION\n";
            cout<<"Play Code : "<<playcode<<endl;
            cout<<"Play Title : "<<playtitle<<endl;
            cout<<"Play Duration : "<<duration<<endl;
            cout<<"Play no of scenes : "<<no_of_scenes<<endl;
        }
};
int main () {
    int choice;
    play p1;
    do{
        cout<<"\n\n[1] NEW PLAY\n[2] MORE INFO\n[3] SHOW\n[4] EXIT\nENTER YOUR CHOICE : ";
        cin>>choice;
        switch (choice){
            case 1:
                p1.newplay();
                break;
            case 2:
                int d,s;
                cout<<"Enter duration : ";
                cin>>d;
                cout<<"Enter no of scenes : ";
                cin>>s;
                p1.moreinfo(d,s);
                break;
            case 3:
                p1.showplay();
                break;
            case 4:
                exit(0);
            default:
                cout<<"Wrong operation !\n";
        }
    }while (choice != 4);
    return 0;
}