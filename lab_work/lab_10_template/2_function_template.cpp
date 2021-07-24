//Illustration of use of template for mixed datatype.
#include<iostream>
using namespace std;

template<class t1, class t2>
float large(t1 n1, t2 n2){
    return (n1>n2) ? n1:n2;
}
int main(){
    int i1;
    float f1;
    cout<<"Enter two values int and float: "<<endl;
    cin>> i1>>f1;
    cout<< large(i1,f1)<<" is large."<<endl;
    //this call is equivalent to large<int,float>(i1,i2)
    return 0;
}
/*  OUTPUT
Enter two values int and float:
4
4.2
4.2 is large.
*/