#include<iostream>
using namespace std;

int sum(int x, int y){
     cout <<"name same but this function is call for two arugments"<<endl;
     return x+y;
     
    
}
int sum(int x ,int y ,int z){
    cout<<"name same but this function is call for three arugments "<<endl;
    return  x+y+z;
    
    

}


int main(){
    
    cout <<"the sum of the 3,4 is :"<<sum(3,4)<<endl;
     cout <<"the sum of the 3,4 ,5 is :"<<sum(3,4,5)<<endl;

     // this is the concept of the fucntionoverloading ,
     // we make different funtion with same name , cpp decided calling with the help of orugments

    return 0;
}