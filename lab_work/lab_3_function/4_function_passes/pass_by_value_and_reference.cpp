#include<iostream>

using namespace std;


void functionfirst(int a)
{
    cout<<"\t Value of a before altering is : "<< a << endl;
    a = 3;
    cout<<"\t Value of a after altering is : "<< a << endl;
}

void functionReference(int &b)
{
    b = 2;
    cout<<"\t Value of b is : "<< b <<endl;
}
int main()
{
    int a = 6;
    int b = 9;
    functionfirst(a);
    functionReference(b);
    cout<<"\t Value of a in main : "<< a << endl;
    cout<<"\t Value of b in main : "<< b << endl;
}