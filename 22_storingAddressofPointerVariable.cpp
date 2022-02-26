#include <iostream>
using namespace std;

int main() {

int xyz=6760;

cout<<"The original value of the axy            " << xyz <<endl;

cout<<"The address where the xyz value are drop " << &xyz <<endl;

int *ref= &xyz;

cout<<"The address of normal Variable is:       "<<ref<<endl;
cout <<"the address of pointer                  "<<&ref<<endl; 
cout <<"print value at pointer                  "<<*ref<<endl;

void *pointerVariableAddress= &ref;

cout<<"The address of Reference Variable is:    "<<pointerVariableAddress<<endl;



  return 0;
}




