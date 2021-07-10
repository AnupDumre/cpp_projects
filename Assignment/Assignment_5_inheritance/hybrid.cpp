#include<iostream>
using namespace std;

class animal{
        public:
        animal(){
            cout<<"Barking.."<<endl;
        }
};
class mammal{
    public:
        mammal(){
            cout<<"Jumping.."<<endl;
        }
};
class Dog: public animal
{
    public:
        Dog(){
            cout<<"Eating.."<<endl;
        }
};
class Eat:public Dog , public mammal
{
    public:
        Eat(){
            cout<<"Eats flesh"<<endl;
        }
};
int main(){
    Eat d1;
}

/* OUTPUT
Barking..
Eating..
Jumping..
Eats flesh
*/