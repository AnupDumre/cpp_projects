  
#include<iostream>
#include<stdio.h>
using namespace std;
 
 class Employee
 {
     private:
       char name[25];
       int id ;
       float salary;

     public:

           void input_data()
            {
                cout<<"\tEnter the Name of Employee: ";
                cin>>name;
                cout<<"\tEnter the Id: ";
                cin>>id;
                cout<<"\tEnter the Salary: ";
                cin>>salary;
            }  


            void display_data()
            {
                
                cout<<"\n\t"<<name<<"\t"<<id<<"\t"<<salary;
                

            }
        
 };

 int main()
 {
     Employee E[5];
     for(int i=0;i<5;i++)
       {
           cout<<"\tEnter details of Employee "<< i+1<<endl;
           E[i].input_data();
       }
  cout<<"\tName \t"<<" Id \t"<<"salary \t"<<endl;
     for(int j=0;j<5;j++)
     {
         E[j].display_data();
         cout<<endl;
     }
}