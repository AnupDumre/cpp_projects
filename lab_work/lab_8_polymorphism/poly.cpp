#include<iostream>
using namespace std;

class Base{
    public:
        virtual void show()=0;
        /*pure virtual function ; abstract class ko 
        object banaauan milldaina*/
        void show_again() {
            cout<<"This is Base Class.";
        }
};

class Derived: public Base //virtual function
{
    public:
        void show(){
            cout<<"This is Derived Class.";
        }

        void display(){
            cout<<" this is some other function in derived class.";
        }
};

int main(){
    //Base b;
    //b.show();

    Derived d;
    //d.show();

    //Base *bptr;
    Derived *bptr;
    //dptr -> show();
    bptr -> display();
    
    //bptr = &d;
    //bptr -> show_again();
}