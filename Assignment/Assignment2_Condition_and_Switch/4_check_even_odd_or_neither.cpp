#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int number;
    cout<<"\n\tEnter any number="<<number;
    cin>>number;
    if(number!=0)
    {
        if((number %2) == 0)
        {
            cout<<"\n\tThe entered number is even."<<endl;
        }
        else
        {
            cout<<"\n\tThe entered number is odd."<<endl;
        }
    }
    else
    {
        cout<<"\n\tThe entered number is zero."<<endl;
    }
    return 0;
}
