#include<iostream>
using namespace std;

class animal{
    public:
        void eat(){
            cout<<"Eating.."<<endl;
        }
};
class mammal{
    public:
        void play(){
            cout<<"Jumping.."<<endl;
        }
};
class Dog: public animal, public mammal
{
    public:
        void bark(){
            cout<<"Barking.."<<endl;
        }
};

int main()
{
    Dog d1;
    d1.eat();
    d1.bark();
    d1.play();
}

/* OUTPUT
Eating..
Barking..
Jumping..
*/