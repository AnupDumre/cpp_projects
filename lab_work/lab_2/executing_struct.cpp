#include<iostream>
#include<conio.h>
using namespace std;

struct student
{
    char name[20];
    int roll;
    char address[20];
};

int main(){
    student s[3];
    for(int i = 0; i < 3; i++)
    {
    cout<<"\tEnter the details of the student "<<i+1<<": "<<endl;
    cout<<"\tName:";
    cin>> s[i].name;
    cout<<"\tRoll no.";
    cin>> s[i].roll;
    cout<<"\tAddress:";
    cin>> s[i].address;
    }
    for (int i=0;i<3;i++)
    {
    cout<<"\n\tThe detail of the student is: "<<i+1<<" : "<<endl;
    cout<<"\tName: "<<s[i].name;
    cout<<"\tRoll no. "<<s[i].roll;
    cout<<"\tAddress "<<s[i].address;
    }
    return 0;
    
}