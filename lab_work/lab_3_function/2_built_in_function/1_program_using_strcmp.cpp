#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char string_1[50], string_2[50];
    cout<<"\t Enter your first string"<<endl;
    cin>>string_1;
    cout<<"\t Enter your second string"<<endl;
    cin>>string_2;

    if(strcmp(string_1,string_2)==0)
    
        cout<<"\t You have entered same string."<<endl;
    
    else
    
        cout<<"\t You have entered different string."<<endl;
    
    
    return 0;

}