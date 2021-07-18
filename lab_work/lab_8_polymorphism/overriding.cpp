#include<iostream>
using namespace std;

class animal{
        public:
        void eat(){
            cout<<"Eating"<<endl;
        }
};
class Dog: public animal
{
    public:
        void eat(){
            cout<<"Eats Bone"<<endl;
        }
};
int main(){
    Dog d1;
    d1.animal::eat();
    d1.eat();
}

/* OUTPUT
Eating
Eats Bone
*/