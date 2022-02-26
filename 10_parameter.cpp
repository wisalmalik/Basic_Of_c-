#include<iostream>
using namespace std;

int multp(int x, int y ){
    int z ;
    z = x*y;
    return z;
}

int main(){
    int x,y,result;
   result = multp(x,y);

    cout << "enter two value for the multp :"<<endl;
    cin>> x >> y;
    cout <<"the result is :"<< result <<endl;


    return 0;
}