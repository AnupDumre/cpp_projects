#include<iostream>
#include<conio.h>
using namespace std;
struct citizen
{
    char name[20];
    int citizen_no[10];
    char address[20];
};
int main()
{
    citizen c[9];
    for (int i=0; i<9;i++)
    {
        cout<<"\tEnter the detail of citizen "<<i+1<<":";
        cout<<"\tName:";
        cin>>c[i].name;
        cout<<"\tCitizenship no:";
        cin>>c[i].citizen_no;
        cout<<"\tAddress:";
        cin>>c[i].address;
    }
    for (int i=0; i<9;i++)
    {
        cout<<"The details of the given citizens are:"<<endl;
        cout<<"\tName of citizen:"<<c[i].name<<endl;
        cout<<"\tcitizenship number:"<<c[i].citizen_no<<endl;
        cout<<"\tAddress of citizen:"<<c[i].address<<endl;
    }
    return(0);
}