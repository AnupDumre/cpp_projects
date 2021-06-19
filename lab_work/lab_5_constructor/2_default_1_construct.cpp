#include<iostream>
using namespace std;

//declare a class
class wall
{
    private:
        double length;
    
    public:
    // create a constructor
    wall()
    {
        //initialize private variables
        length = 5.5;
        cout<<"Creating a wall."<<endl;
        cout<<"Length = "<<length<<endl;
    }
    
};
int main()
{
    //create an object
    wall wall;
    return 0;
}