#include<iostream>
using namespace std;

class animal{
        public:
        void eat(){
            cout<<"Eating.."<<endl;
        }
};
class Dog: public animal
{
    public:
        void bark(){
            cout<<"Barking..";
        }
};
int main()
{
    Dog d1;
    d1.eat();
    d1.bark();
}

/* OUTPUT
Eating..
Barking..
*/