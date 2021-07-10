#include<iostream>
using namespace std;

class animal{
        public:
        animal(){
            cout<<"Barking.."<<endl;
        }
        ~animal(){}

};
class Dog: public animal
{
    public:
        Dog(){
            cout<<"Eating.."<<endl;
        }
        ~Dog(){}
};
class Eat:public animal {
    public:
        Eat(){
            cout<<"Eats flesh"<<endl;
        }
        ~Eat(){}
};
int main(){
    Dog d;
    Eat d1;
}

/* OUTPUT
Barking..
Eating..
Barking..
Eats flesh 
*/