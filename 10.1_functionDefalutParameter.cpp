#include<iostream>
using namespace std;

void test(char='*',int=45);

int main(){

    test();
    test('+',30);
    test('-');
    return 0;
}
void test(char cha ,int num){

    for (int i = 0; i < num; i++)
    {
        cout << cha ;
        
    }
    cout<<endl;
    
}