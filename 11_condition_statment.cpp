#include<iostream>
using namespace std;

void check(int x){
    if (x>50)
    {
        cout<<"your number is grester than 50 " << endl;
    }
    else if (x<=20)
    {
        cout <<"your number is less than 20 "<< endl;
    }
    else 
        cout <<"enter a valid number "<<endl;
    
    
    
}

int main(){
    
    int x = 20;
    check(x);


    return 0; 
}