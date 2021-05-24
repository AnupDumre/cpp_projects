#include<iostream>
using namespace std;
int main()
{   
    float base, height, area ;
    cout<<"\tEnter the base of the triangle : ";
    cin>>base;
    cout<<"\n\tEnter the height of the triangle : ";
    cin>>height;
    area = (0.5)*base*height;
    cout<<"\t\nThe area of the triangle is : "<<area;
    return 0;
}