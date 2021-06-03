#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

float area_of_triangle();

int main()
{
    float ar;
    ar= area_of_triangle();
    cout<<"\tThe area of triangle is: "<<ar<<endl;
}

float area_of_triangle()
{
    float s1,s2,s3, s,area;
    cout<<"\tEnter three side of the triangle:"<<endl;
    cout<<"\tside 1 ";
    cin>>s1;
    cout<<"\tside 2 ";
    cin>>s2;
    cout<<"\tside 3 ";
    cin>>s3;
    s = (s1 + s2 + s3)/2;
    area = sqrt(s*(s-s1)*(s-s2)*(s-s3));
    return area;
}