#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int number;
    cout<<"\n\t Enter any number:"<<number;
    cin>>number;
    if(number>0)
    {
        cout<<"\n\t The entered number is positive."<<endl;
    }    
    else if(number<0)
    {
        cout<<"\n\t The entered number is negative."<<endl;
    }
    else
    {    
        cout<<"\n\t The entered number is zero."<<endl;
    }
    return 0;
}
