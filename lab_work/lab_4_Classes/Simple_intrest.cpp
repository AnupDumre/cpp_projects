#include<iostream>
using namespace std;
class Interest
{
    private:
      float SI;

    public:
        
       void calulation(double per , double tim , double r)
        {

            SI=(per*tim*r)/100;
        
        }     

         void calulation(double per , double tim ,float rate=10.0f)
    
        {

            SI=(per*tim*rate)/100;
        
        }   

        void display()
        {
            
            cout<<"Simple interest is : \t"<<SI;
        
        }                  
      
};

int main()
{
    Interest I1;
      
    float percentage,rate1,time;
    char ch;
    
        cout<<"Enter percentage: ";
        cin>>percentage;
        cout<<"Enter time: ";
        cin>>time;
        cout<<"Do you want to enter rate Y/N: ";
        cin>>ch;
        
        if(ch=='Y'|| ch=='y')
        
            {
            
                cout<<"enter rate";
                cin>>rate1;
                I1.calulation(percentage,time,rate1);
            
            }


        else
            
            I1.calulation(percentage,time);


    I1.display();
       
}