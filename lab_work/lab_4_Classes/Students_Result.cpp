#include<iostream>
#include<stdio.h>
using namespace std;

class Student
{
  string name;
  int roll;
  string address;
  double percentage;

  public:
  void input()
  {
    cout<<"Enter name of student: ";
    cin>>name;
    cout<<"Enter roll number of student: ";
    cin>>roll;
    cout<<"Enter address of student: ";
    cin>>address;
    cout<<"Enter percentage of student: ";
    cin>>percentage;
  }

  void display()
  {  
    if(percentage<45)
    {
      cout<<name<<"\tSorry you have less than 45%."<<endl;
    }
    
    else{
      cout<<"\tName:\t\t"<<name<<endl;
      cout<<"\tRoll no:\t"<<roll<<endl;
      cout<<"\tAddress:\t"<<address<<endl;
      cout<<"\tPercentage:\t"<<percentage<<endl;
    }
  }
};

int main()
{
  Student s1,s2;
  cout<<"\n";
  s1.input();
  s2.input();
  s1.display();
  cout<<"\n";
  s2.display();
  cout<<"\n";
  return 0;
}