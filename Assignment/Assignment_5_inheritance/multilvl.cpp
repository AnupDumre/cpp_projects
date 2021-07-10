#include<iostream>
using namespace std;

class animal
{
        public:
        animal(){
            cout<<"Barking.."<<endl;
        }
};
class Dog: public animal
{
    public:
        Dog(){
            cout<<"Eating.."<<endl;
        }
};
class Eat:public Dog {
    public:
        Eat(){
            cout<<"Eats flesh"<<endl;
        }
};
int main()
{
    Eat d1;
}

/* OUTPUT
Barking..
Eating..
Eats flesh
*/