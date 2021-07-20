#include<iostream>
using namespace std;
int main(){
    int i=100; //i is integer
    cout<<"value of adress of i is: "<<&i;
    int *p; //p is pointer variable

    //p = i; cannot assign int to int*, integer to point

    p= reinterpret_cast<int *>(i);
    cout<<" value of p is: "<<p;
}

/* output

value of adress of i is: 0x22fe44 value of p is: 0x64

*/