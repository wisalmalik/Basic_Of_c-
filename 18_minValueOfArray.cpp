#include <iostream>
using namespace std;

int main() {


int myNum[5]= {11,10,33,4,5};

int min =myNum[0];

for (int i = 0; i <5; i++)
{
    if (myNum[i] < min)
    {
        min=myNum[i];
    }
    
}
cout<<"Manimum number is: "<<min;

  return 0;
}
