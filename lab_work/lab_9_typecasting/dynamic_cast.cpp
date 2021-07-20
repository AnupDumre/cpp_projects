#include<iostream>
using namespace std;

class Base{
    public:
    virtual void print(){
        cout<<"Base"<<endl;
    }
};

class Derived:public Base{
    public:
    void print(){
        cout<<"Derivrd 1"<<endl;
    }
}
int main(){
    Base *bptr, bpt;
    Derived *dptr,dpt;

    bptr = &dpt;
    dptr = dynamic_cast<Derived *>(bptr);
    dptr -> print();

    //bptr = &bpt; //base pointer holds address of base class obj
    //dptr = dynamic_cast<Derived *> (bptr);//casting is not allowed as bptr holds obj of base class and not derived class
    if (dptr == nullptr){
        cout<<"Null pointer"<<endl;
    }
    else{
        cout<<"Not Null"<<endl;
    }
    return 0;
}