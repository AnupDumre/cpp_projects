#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float number1,number2;
    char operation;
    cout<<"\tEnter two number for your operation=";
    cin>>number1>>number2;
    cout<<"\tChoose an operator you want to use (+,-,*,/):";
    cin>>operation;
    switch (operation)
    {
        case '+':
        cout<<number1<<"+"<<number2<<"="<<number1+number2<<endl;
        break;
        case '-':
        cout<<number1<<"-"<<number2<<"="<<number1-number2<<endl;
        break;
        case '*':
        cout<<number1<<"*"<<number2<<"="<<number1*number2<<endl;
        break;
        case '/':
        cout<<number1<<"/"<<number2<<"="<<number1/number2<<endl;
        break;
        default:
        cout<<"You entered an wrong operation."<<endl;
        break;
    }
    return(0);
}