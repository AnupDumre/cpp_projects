#include<iostream>
using namespace std;

class group1{
    private:
        float num_1,num_2;
    public:
        friend class group2;

        void getdata()
       {
           cout<<"Enter Two Number: ";
           cin>>num_1>>num_2;
       }
};
class group2{
    public:
        float mean( group1 S1 ) 
      { 
             return (S1.num_1 +S1.num_2)/2;
      }
};
int main(){
    group1 a;
    group2 b;
    a.getdata();
    cout<<"Addition of both Entered numbers is: "<<b.mean(a)<<endl;
}

/*OUTPUT
Enter Two Number: 23
32
Addition of both Entered numbers is: 27.5
*/