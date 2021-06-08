#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char string_1[20], string_2[40];

    cout<<"Enter the string."<< endl;
     cin >> string_1;

     strcpy(string_2,string_1);
       
    cout <<"Entered string is " << string_2 ;
     
}
