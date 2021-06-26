#include<iostream>
using namespace std;
class box
{
    private:
        double length, breadth, height;
    public:
        box(double len, double brdth, double hgt)
        {
            cout<<"Constructor is called"<<endl;
            length = len;
            breadth = brdth;
            height = hgt;
        }
        double volume()
        {
            return length*breadth*height;
        }
};

int main()
{
    box box1(15.2,35.8,4.5),box2(89.5,65.4,2.3);
    box *ptrbox;
    cout<<"address of box1 variable"<< &box1 <<endl;
    /*pointer yesto khallko variable ho jasle aru variable ko adress
    lie afule carry garna sakxa. in this case, box1 variable ko address
    lie ptrbox variable le carry garna sakkxa.*/

    ptrbox = &box1;
    /* acess the member function using member acess operation (-->)*/

    cout<<"volue of box1"<<ptrbox -> volume()<<endl;

    /* save the address of second object*/

    ptrbox = &box2;

    cout<<"Volume of box2: "<< ptrbox ->volume()<<endl;
    return 0;
}