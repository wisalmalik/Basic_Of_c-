#include <iostream>
using namespace std;

int out(int x)
{
    cout << "the vlaue given is " << x << endl;

    return x;
}

int main()
{

    int final_value;

    final_value = out(1) && out(0);  // it check only the first one if it find the 0 then it not check the second one  

    cout << "the final value is :" << final_value << endl;

    return 0;
}



