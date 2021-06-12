#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

void area_of_triangle(float, float, float);

int main()
{
    float side_1, side_2, side_3;
    cout<<"\t Enter three side of the triangle:"<<endl;
    cout<<"\t side 1: ";
    cin>>side_1;
    cout<<"\t side 2: ";
    cin>>side_2;
    cout<<"\t side 3: ";
    cin>>side_3;

    area_of_triangle(side_1, side_2, side_3);
    return 0;
}

void area_of_triangle(float s1, float s2, float s3)
{
    float s,area;
    s = (s1 + s2 + s3)/2;
    area = sqrt(s*(s-s1)*(s-s2)*(s-s3));
    cout<<"\t The area of triangle is: "<<area<<endl;
}