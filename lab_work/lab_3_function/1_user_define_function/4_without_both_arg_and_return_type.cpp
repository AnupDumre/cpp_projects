#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
void area_of_triangle();
int main()
{
    area_of_triangle();
    return 0;
}
void area_of_triangle()
{
    float s1,s2,s3,s,area;
    cout<<"\tEnter three side of the triangle: "<<endl;
    cout<<"\tSide 1 : ";
    cin>>s1;
    cout<<"\tSide 2 : ";
    cin>>s2;
    cout<<"\tSide 3 : ";
    cin>>s3;
    s=(s1+s2+s3)/2;
    area= sqrt(s*(s-s1)*(s-s2)*(s-s3));
    cout<<"\tThe area of triangle is: "<<area<<endl;
}