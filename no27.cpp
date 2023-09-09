/*
27. Write a program to find the Volume of the Cube, Cylinder, and Sphere using Function 
Overloading. The functions should be defined outside the class.
*/
#include<iostream>
using namespace std;
class shape {
    public:
    int volume (int side);//cube
    float volume (float pi,int rad,int height);//cylinder
    float volume (float pi,float rad);//sphere 
};
int shape :: volume (int side){
    return (side * side * side);
}
float shape :: volume (float pi,int rad,int height){
    return (pi *rad *rad *height);
}
float shape :: volume (float pi,float rad){
    return ((4.0/3.0)*pi*rad*rad*rad);
}
int main () {
    int choice,s;
    float r,h,pi = 22.0/7.0;
    shape shape1;
    do {
        cout<<"\n\n\t\t[1] VOLUME OF CUBE\n\t\t[2] VOLUME OF CYLINDER\n\t\t[3] VOLUME OF SPHERE\n\t\t[4] EXIT\n\t\tENTER YOUR CHOICE : ";
        cin>>choice;
        switch( choice ){
            case 1:
                cout<<"Enter side : ";
                cin>>s;
                cout<<"THE VOLUME OF CUBE IS "<<shape1.volume(s)<<endl;
                break;
            case 2:
                cout<<"Enter radius : ";
                cin>>r;
                cout<<"Enter height : ";
                cin>>h;
                cout<<"THE VOLUME OF CYLINDER IS "<<shape1.volume(pi,r,h)<<endl;
                break;
            case 3:
                cout<<"Enter radius : ";
                cin>>r;
                cout<<"THE VOLUME OF SPHERE IS "<<shape1.volume(pi,r)<<endl;
                break;
            case 4:
                exit(0);
            default:
                cout<<"Invalid operation !\n";
        }
    }while (choice != 4);
    return 0;
}