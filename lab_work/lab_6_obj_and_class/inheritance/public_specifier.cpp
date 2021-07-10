#include<iostream>
using namespace std;

class circle{
        public:
            double radius;
            double compute_area(){
                return 3.1415*radius*radius;
            }
};
int main()
{
    circle obj;
    obj.radius=7.5;
    cout<<"Radius is: "<<obj.radius<<endl;
    cout<<"Area is: "<<obj.compute_area()<<endl;
    return 0;
}