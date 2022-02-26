#include<iostream>
using namespace std;


int main(){

    // this is for loop 

    for (int i = 0; i < 6; i++)
    {
        cout << i<<" ";
    }
    
    // this is while loop 

 int i = 0;
  while (i < 5) {
    cout << i << "\n";
    i++;
  }


   // Local variable declaration:
	char c = 'n';
   // while loop execution

   while( c !='y' ) 
   {
	   cout << "in loop"<<endl;
      cout<<"Exit while loop(y/n)?";
	   cin>>c;
   }
   
   cout<<"=====OUTSIDE LOOP====="<<endl;
    

    

    return 0;

}