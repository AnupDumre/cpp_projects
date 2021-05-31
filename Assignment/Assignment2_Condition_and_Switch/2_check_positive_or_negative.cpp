#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int number;
    cout<<"\n\tEnter any number:"<<number;
    cin>>number;
    if(number>=0)
    {
        cout<<"\n\tThe entered number is positive. "<<endl;
    }    
    else
    {    
        cout<<"\n\tThe entered number is negative."<<endl;
    }
    return 0;
}