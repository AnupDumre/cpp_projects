#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

float area_of_triangle(float, float, float);

int main()
{
    float ar, side_1, side_2, side_3;
    cout<<"\tEnter three side of the triangle:"<<endl;
    cout<<"\tside 1 ";
    cin>>side_1;
    cout<<"\tside 2 ";
    cin>>side_2;
    cout<<"\tside 3 ";
    cin>>side_3;

    ar = area_of_triangle(side_1, side_2, side_3);

    cout<<"\tThe area of triangle is: "<<ar<<endl;
    return 0;
}

float area_of_triangle(float s1, float s2, float s3)
{
    float s,area;
    s = (s1 + s2 + s3)/2;
    area = sqrt(s*(s-s1)*(s-s2)*(s-s3));
    return area;
}