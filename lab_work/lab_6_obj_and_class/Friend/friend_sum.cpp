#include<iostream>
using namespace std;

class group1{
    private:
        float num_1;
    public:
        friend class group2;

        void getdata()
       {
           cout<<"Enter The first Number: ";
           cin>>num_1;
       }
};
class group2{
    private:
        float num_2;
    public:
        void getdata()
       {
           cout<<"Enter The second Number: ";
           cin>>num_2;
       }
        float sum( group1 S1,group2 S2 ) 
      { 
             return (S1.num_1 +S2.num_2);
      }
};
int main(){
    group1 a;
    group2 b,c;
    a.getdata();
    b.getdata();
    cout<<"Addition of both Entered numbers is: "<<c.sum(a,b)<<endl;
}

/* OUTPUT
Enter The first Number: 43
Enter The second Number: 34
Addition of both Entered numbers is: 77
*/