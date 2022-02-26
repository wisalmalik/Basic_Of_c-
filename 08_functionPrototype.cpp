#include<iostream>
using namespace std;

float sum(int x, float y);

int main(){

    float sum1 = sum(5,5.5);
    cout << "the sum of the two number 5, 5.5 is " << sum1 <<endl;
    return 0;
}

float sum(int x , float y ){
    return x+y;
}