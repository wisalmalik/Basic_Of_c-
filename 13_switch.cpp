#include<iostream>
using namespace std; 


int main(){
    char x  = 'D';
    switch (x)
    {
    case 'A':
        cout <<"your points is 4.0";
        break;
    case 'b':
        cout <<"your points is 3.0";
        break;
     case 'C':
        cout <<"your points is 2.0";
        break;
     case 'D':
        cout <<"your are fail";
        break;
    
    default:
        cout<<"enter the correct value ";
        break;
    }


    return 0;
}