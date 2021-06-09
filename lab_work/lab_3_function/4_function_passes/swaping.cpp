#include<iostream>
using namespace std;

void swap(int a ,int b)
{
  int c;
  c = a;
  a = b;
  b = c;
  cout<<"\t Value inside swap function"<<endl<<"\t a = "<<a<<endl<<"\t b = "<<b<<endl;

}

int main()
{
  int x,y;
  cout<<"\t Enter two numbers: ";
  cin>>x>>y;
  cout<<"\t Value before swapping "<<endl<<"\t a = "<<x<<endl<<"\t b = "<<y<<endl;
  swap(x,y);
  cout<<"\t Value after swapping "<<endl<<"\t a = "<<x<<endl<<"\t b = "<<y<<endl;
  return 0;
}