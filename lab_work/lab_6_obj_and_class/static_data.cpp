#include <iostream>
using namespace std;
 
class first{
    private :
        int a ;
        static int b;
    public:
        first (int x,int y){
            a=x;
            b=y;
        }
        void show(){
            cout<<a<<","<<b<<endl;
        }
        static void display(){
            cout<<"the value of b is:"<<b<<endl;
        }
};
int first::b=0;
int main(){
    first obj1(20,30);
    obj1.show();
    first obj2(200,400);
    first ::display();
    obj1.show();
}


/* OUTPUT
20,30
the value of b is:400
20,400
*/