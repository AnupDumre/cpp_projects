#include<iostream>
#include<conio.h>
using namespace std;

struct student
{
    char name[20];
    int roll;
    char address[20];
};
int main()
{
    student s;
    cout<<"\tEnter details of the student:"<<endl;
    cout<<"\tName:";
    cin>> s.name;
    cout<<"Roll no.";
    cin>> s.roll;
    cout<<"Address:";
    cin>> s.address;
    cout<<"\n\tThe detail of the student is:\n";
    cout<<"\n \t Name:\t"<<s.name;
    cout<<"\t Roll no.\t"<<s.roll;
    cout<<"\t address\t"<<s.address;
    return 0;
    
}