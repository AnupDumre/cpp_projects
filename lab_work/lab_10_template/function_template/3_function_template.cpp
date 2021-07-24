//Illustration of precedence for implicit datatype of explicit datatype.
#include<iostream>
using namespace std;

template<class t1, class t2>
t1 testfunc(t2 a)//template function
{
    t1 b;
    b= static_cast<t1>(a);
    cout<<b<<endl;
    return 0;
}

int main(){
    int inum = 5;
    testfunc<float>(inum);//here t1 will be float and t2 will be integer.
    testfunc<int , float >(inum);
    /*here t1 will be integer and t2 will be float.
    inum integer declared explicit so specification overrides, so inum gets converted to float.*/
    testfunc<float , int>(inum);
    return 0;
}

/* OUTPUT
5
5
5
*/
