#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,sum=0,n=1;
    cout<<"\tEnter the number of terms you want to get sum=";
    cin>>a;
    while(n<=a)
    {
        sum=sum+n;
        n++;
    }
    cout<<"\tThe sum of number of first " << a << " natural number = "<<sum<<endl;
    return (0);
}