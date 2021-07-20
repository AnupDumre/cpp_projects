#include<iostream>
using namespace std;

class Animal{
    public:
    //virtual void display(){}
};

class Cow : public Animal{

};

class Dog : public Animal{

};

int main(){
    int mark,roll;
    float avg;
    char *str;
    Animal *anm;
    Cow cw;
    Dog dg;

    cout<<"Type of mark is: "<<typeid(mark).name()<<endl;
    cout<<"Type of roll is: "<<typeid(roll).name()<<endl;
    cout<<"Type of avg is: "<<typeid(avg).name()<<endl;
    cout<<"Type of *str is: "<<typeid(*str).name()<<endl;
    cout<<"Type of str is: "<<typeid(str).name()<<endl;

    cout<<"Type of anm is: "<<typeid(anm).name()<<endl;
    cout<<"Type of cw is: "<<typeid(cw).name()<<endl;
    cout<<"Type of dg is: "<<typeid(dg).name()<<endl;
    cout<<"********************************************************************";
    cout<<endl;
    anm = &cw;
    cout<<"Type of *anm when pointing to cw is: "<<typeid(*anm).name()<<endl;

    anm = &dg;
    cout<<"Type of *anm when pointing to cw is: "<<typeid(*anm).name()<<endl;

    return 0;
}


/* OUTPUT
//WITH VIRTUAL FUNCTION
Type of mark is: i
Type of roll is: i
Type of avg is: f
Type of *str is: c
Type of str is: Pc
Type of anm is: P6Animal
Type of cw is: 3Cow
Type of dg is: 3Dog
********************************************************************
Type of *anm when pointing to cw is: 3Cow
Type of *anm when pointing to cw is: 3Dog


//WITHOUT VIRTUAL FUNCTION
Type of mark is: i
Type of roll is: i
Type of avg is: f
Type of *str is: c
Type of str is: Pc
Type of anm is: P6Animal
Type of cw is: 3Cow
Type of dg is: 3Dog
********************************************************************
Type of *anm when pointing to cw is: 6Animal
Type of *anm when pointing to cw is: 6Animal

*/