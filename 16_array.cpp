#include <iostream>
#include <string.h>
using namespace std;

void array_test(){
    int a[5];

    a[0] =25;
    cout << "before assigmemt"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
        

    }
    cout <<endl<<endl<<endl; //only on index one it show the value and except that it show garbeg value 


    int array[5];
    array[0]= 25;
    array[1]=26;
    array[2]=27;
    array[3]=28;
    array[4]=29;
    array[5]=30;

    // "After assigment the  value to the array"
    for (int i = 0; i < 5; i++)
    {
        a[i]=0;
    }
    cout << "After assignment"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << array[i]<<" ";
    }
    
    cout << endl<<endl<<endl;

    // now i want to assign value through iteration 

    int array2[6];
        for (int i = 0; i < 6; i++)
        {
            cout <<array2[i]<<" ";
        }

    cout <<endl<<endl<<endl;
        

    

}
void test2(){

    cout<<"take input from the user and put it into array"<<endl;

    int array[5];
       cout << "Enter 5 numbers: " << endl;

    //  store input from user to array
    for (int i = 0; i < 5; ++i) {
        cin >> array[i];
    }

    cout<<"your array are"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<< array[i]<<" ";
    }
    
    
}


int main(){
    array_test();
    test2();


    return 0;
}