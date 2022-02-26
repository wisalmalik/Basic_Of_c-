#include<iostream>
using namespace std;


int main(){

    int x = 25; 
    cout <<"value of x          "<< x <<endl;
    cout <<"address of x        "<< &x <<endl;

    int *p; // declearation of pointer
    p = &x;  // assign address of p

    cout << "value of p at self  "<< p <<endl;
    cout << "value at points     "<< *p <<endl;  

    return 0;
}