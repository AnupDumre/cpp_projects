#include<iostream>
#include<conio.h>

using namespace std;

void add(int a, int b)
{
    cout <<"\t The sum of the numbers is : "<< a + b << endl;
}

void add(double a, int b, double c)
{
    cout <<"\t The sum of the numbers is : "<< a + b + c << endl;
}

void add(int a, double b)
{
    cout <<"\t The sum of the numbers is : "<< a + b << endl;
}

int main()
{
    add(5, 6);
    add(3.6, 28, 2.8);
    add(28, 3.6);
}