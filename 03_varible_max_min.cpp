#include<iostream>
#include<limits.h>


//To find the limit of the varible we must include the labrary of limits.h

using namespace std;


int main(){

    // integer datatype
    int x = 2147483647122;
    cout <<" the following integer are: "<< x <<endl;
    cout <<"the limit of the integer is :" << INT_MAX <<endl;
    cout <<"the min value of the integer is :"<< INT_MIN <<endl;


    cout <<endl <<endl<<endl;

    // long datatype
    long y =2147483647;
    cout<<"the following value are hold the long " <<endl;
    cout <<"the limit of the Long is :" << LONG_MAX <<endl;
    cout <<"the min value of the Long is :"<< LONG_MIN;
    



    return 0; 
}