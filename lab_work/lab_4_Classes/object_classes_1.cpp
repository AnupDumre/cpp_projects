#include<iostream>
using namespace std;
//creat a class
class Room
{
    public:
    double length;
    double breadth;
    double height;
    double calculateArea()
    {
        return length*breadth;
    }
    double calculateVolume()
    {
        return length*breadth*height;
    }
};
int main()
{
    //creat object of Room class
    
    Room room1;

    //assign values to data members
    room1.length = 42.5;
    room1.breadth = 30.8;
    room1.height = 18.7;
    
    //calcu;late and display the area and volume
    
    cout<<"\tArea of Room = " <<room1.calculateArea()<<endl;
    cout<<"\tVolume of Room = " <<room1.calculateVolume()<<endl;
}