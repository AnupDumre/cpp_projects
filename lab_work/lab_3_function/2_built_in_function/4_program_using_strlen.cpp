#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char string[20];
    int length;
    cout<<"\t Enter the string you want to find the lenght."<<endl;
     cin>>string;

     length=strlen(string);
    
     cout<<"\t Length  of entered string is: "<<length <<endl;
}