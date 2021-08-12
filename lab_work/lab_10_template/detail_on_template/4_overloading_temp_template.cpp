#include<iostream>
using namespace std;

template <class T> //first template
void func(T a, T b)//here both arguments are of same datatpes
{
    cout<<"func(T a , T b)-->\t"<<a<<" "<<b<<endl;
}
template<class T1, class T2>//second template
void func(T1 a, T2 b) //here arguments are of different data types
{
    cout<<"func(T1 a , T2 b)-->\t"<<a<<" "<<b<<endl;
}
int main()
{
    func(28,36);//first template function is called
    func(22,3.6);//second template function is called
    func("We","live");//first template function is called
    func("Mt Everest",8848);//second template function is called
    return 0;   
}

/* OUTPUT
func(T a , T b)-->	28 36
func(T1 a , T2 b)-->	22 3.6
func(T a , T b)-->	We live
func(T1 a , T2 b)-->	Mt Everest 8848
*/