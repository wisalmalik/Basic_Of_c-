#include<iostream>
using namespace std;



int main(){

    // interger array 

    int marks[5] = {22,333,44,55,66};
    cout<<marks[0] <<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    cout<<marks[5]<<endl;


    // access array through index by using the for loop

    int marks2[6] ={1,2,3,4,5,6};

    for (int i = 0; i < 6; i++)
    {
        cout << marks2[i]<<" ";
    }
    cout <<endl<<endl;
    
    // float array 
    float marks3[5]={1.2,2.2,3.3,4.4,5.5};
    for (int i = 0; i < 5; i++)
    {
        cout << marks3[i]<<" ";
    }

    cout <<endl<<endl;

    // 2D array 
    int marks4[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0;  j < 3; j++)
        {
            cout << marks4[i][j]<<" ";
        }
        cout <<endl;
    }
    cout <<endl;


    // after assigment of 2D array 

    int val = 0;

    int marks5[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0;  j < 3; j++)
        {
             marks5[i][j] = val;
            val++;
        }
        cout <<endl;
    }
    cout <<endl;
    

    // char array

    char a[] = "hello";
    cout << a <<endl;
      for (int i = 0; i < 5; i++)
    {
        cout<< a[i]<<' '<<endl;
    }

    cout <<endl <<endl;
    
  // string array 
   string name = "wisal";
   cout << name <<endl;
   cout << name[0] <<endl;
   cout << "the length off the sting :"<<name.length()<<endl;
     cout << "it show that the sting is empty or not :"<<name.empty()<<endl;


   
    

    return 0;
}