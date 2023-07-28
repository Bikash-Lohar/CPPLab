#include<iostream>
using namespace std;
void prime();
int main () {
    prime();
    return 0;
}
void prime(){
    int flag, num = 2;
    do {
        flag = 0;
        for (int i = 2; i<num-1; i++){
            if (num%2 == 0){
                flag = 1;
            }
        }
        if (flag == 0){
            cout<<num<<" is no a prime number!\n";
        } else {
            cout<<num<<"  is a prime number!\n";
        }
        num++;
    } while (num != 10);
}
