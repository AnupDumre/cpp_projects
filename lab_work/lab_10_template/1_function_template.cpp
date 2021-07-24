#include<iostream>
using namespace std;

template<class t1, class t2>
void testfun(t1 a, t2 b){
    cout<<a<<" "<<b<<endl;
}
int main(){
    int inum = 6;
    float fnum=6.28;
    testfun(inum,fnum);
    //equivalent to testfun  <int , float>(inum, fnum)
    testfun(345, "Template are cool features of OOP...");
    //equivalent to testfun<int , string>(inum, char)
    return 0;
}

/* OUTPUT

6 6.28
345 Template are cool features of OOP...

*/