#include<iostream>
using namespace std;

// Class of Complex
class Complex
{
	private:
		float real;
		float imaginary;
	public:
		//initialize of default constructor
		Complex()
        {
			real = 0;
			imaginary = 0;
		}
		// parameterized constructor
		Complex(float r, float i)
        {
			real = r;
			imaginary = i;
		}

		/*Add complex number function
		adds complex number with the object 
		that invokes this function and return*/
		
        Complex add(Complex c)
        {
			// return directly, with nameless object
			return Complex(real + c.real, imaginary + c.imaginary);
		} 

		// function to display
		void display(){
			cout<<"("<<real<<","<<imaginary<<")"<<endl;
		}
};

int main()
{
	Complex c1(3.6, 5.7), c2(2.8, 3.1), c3;
	c3 = c1.add(c2); //adds c1 with c2 and returns to c3
	c1.display();
	c2.display();
	cout<<"The sum is : ";
	c3.display();
	return 0;
}