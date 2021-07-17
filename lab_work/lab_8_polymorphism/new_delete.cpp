#include<iostream>
using namespace std;

int main()
{
    int* pointInt;
    float* pointFloat;

    pointInt = new int;
    pointFloat = new float;

    cout<<"address assigned to pointInt is: "<< pointInt <<endl;
    cout<<"address assigned to pointFloat is: "<< pointFloat <<endl;
    
    *pointInt = 45;
    *pointFloat = 45.45f;
    
    cout<<"address assigned to pointInt is: "<< *pointInt <<endl;
    cout<<"address assigned to pointFloat is: "<< *pointFloat <<endl;
    

    delete pointInt;
    delete pointFloat;
    
    return 0;
}


/* OUTPUT

address assigned to pointInt is: 0x469ea0
address assigned to pointFloat is: 0x469ec0
address assigned to pointInt is: 45
address assigned to pointFloat is: 45.45
*/