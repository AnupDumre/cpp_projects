#include<iostream>
using namespace std;
class calculation
{
    private:
        int sum;
        float different;
    public: 
        calculation(int num_1 ,int num_2)
        {
            sum=num_1+num_2;
            cout<<"The sum of Numbers is :  "<<sum<<endl;
        }
       
       calculation(int num_1 ,int num_2 ,int num_3)
       {
         sum = num_1 + num_2 + num_3;
            cout<<"The sum of Numbers is :  "<<sum<<endl;  
       }

       calculation( float num_1 ,float num_2)
       {
             if(num_1>num_2)
                different=num_1-num_2;
             else
                different=num_2-num_1;   

           cout<<"The difference of Numbers is :  "<<different<<endl;   
       }
};

int main()
{
    calculation C1(42,54) ; // object created , first constructor called
    calculation C2(23,43,76); 
    calculation C3(32.5f,21.65f);
    
}