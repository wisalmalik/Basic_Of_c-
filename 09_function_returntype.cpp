#include<iostream>
using namespace std;

float sum(int x, float y){
    float z = x+y ;
    return z;
}

int main(){

    float result = sum(1,2.5);
    cout << "your result is :"<< result <<endl; // if we want result in the float , function type  , return type , and arugment must be in the form of float

    return 0;
}