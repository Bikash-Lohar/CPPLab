#include<iostream>
#include<cstring>
using namespace std;
void palindrome(char text[], int size);
int main(){
    char text[50];
    cout<<"Enter the text:";
    cin>>text;
    palindrome(text,strlen(text));
    return 0;
}
void palindrome (char text[], int size){
    cout<<"The Entered text:"<<text<<endl<<" The size of the text:"<<size<<endl;
    char rev[size+1];
    int i,j;
    i = 0;
    j = size-1;
    while ( j >= 0 ){
        rev[i] = text[j];
        i++;
        j--;
    }
    rev[i] = '\0';
    cout<<"The text after reversing:"<<rev<<endl<<"The size of the reversed text:"<<strlen(rev)<<endl;
    if (!strcmp(text,rev)){
        cout<<"The given string is a palindrome!\n";
    } else {
        cout<<"The given string is not a palindrome!\n";
    }
}