#include<iostream>
using namespace std;

class unary
{
    int a,b,c;
    public:
        void get_data(int x, int y, int z)
        {
            a = x;
            b = y;
            c = z;

        }
        //return_type operator op() egs ++,--

        void operator-()
        {
            a = -a;
            b = -b;
            c = -c;
        }
        void display()
        {
            cout<< "value of a = "<< a <<endl;
            cout<< "value of b = "<< b <<endl;
            cout<< "value of c = "<< c <<endl;
        }
};

int main()
{
    unary u1;
    u1.get_data(1,2,-3);
    u1.display();
    -u1;
    u1.display();

}