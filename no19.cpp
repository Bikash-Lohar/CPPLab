#include<iostream>
using namespace std;
class figure {
    public:
    int area (int side);//square
    int area (int side,int height);//rectangle
    float area (float b,float h);//triangle
    float area (float pi,int rad);//circle
    float area (float a,float b,float h);//trapezoid
};
int figure :: area (int side){
    return side * side;
}
int figure :: area (int side, int height){
    return side * height;
}
float figure :: area (float b, float h){
    return ((b * h)/2.0);
}
float figure :: area (float pi, int rad){
    return pi * rad * rad;
}
float figure :: area (float a, float b, float h){
    return (((a + b)/2.0)*h);
}

int main () {
    int choice;
    int side, height, rad;
    float a, b, h, pi = 22.0/7.0;
    figure f1;
    do {
        cout<<"\n\n\t\t[1] AREA OF SQUARE\n\t\t[2] AREA OF A RECTANGLE\n\t\t[3] AREA OF A TRIANGLE\n\t\t[4] AREA OF A CIRCLE\n\t\t[5] AREA OF A    TRAPEZOID\n\t\t[6]EXIT\n\t\tENTER YOUR CHOICE : ";
        cin>>choice;
        switch( choice ){
            case 1:
                cout<<"Enter side : ";
                cin>>side;
                cout<<"The answer is "<<f1.area(side)<<endl;
                break;
            case 2:
                cout<<"Enter base : ";
                cin>>side;
                cout<<"Enter height : ";
                cin>>height;
                cout<<"The answer is "<<f1.area(side,height)<<endl;
                break;
            case 3:
                cout<<"Enter base : ";
                cin>>b;
                cout<<"Enter height : ";
                cin>>h;
                cout<<"The answer is "<<f1.area(b,h)<<endl;
                break;
            case 4:
                cout<<"Enter radius : ";
                cin>>rad;
                cout<<"The answer is "<<f1.area(pi,rad)<<endl;
                break;
            case 5:
                cout<<"Enter top side : ";
                cin>>a;
                cout<<"Enter bottom side : ";
                cin>>b;
                cout<<"Enter height : ";
                cin>>h;
                cout<<"The answer is "<<f1.area(a,b,h)<<endl;
                break;
            case 6:
                exit(0);
            default:
                cout<<"Invalid operation !\n";
        }
    }while (choice != 6);
    return 0;
}