# *CONSTRUCTOR OVERLOADING*
We can use the same name of the functions; whose parameter sets are different. Different constructors with the same name is  called constructor overloading.
Overloaded constructors must have the same name and different number of arguments.
The constructor is called based on the number and types of the arguments are passed.
We have to pass the argument while creating objects, otherwise the constructor cannot understand which constructor will be called.

Different constructors with the same name is  called constructor overloading.

The constructor must obey one or both of the followinDifferent constructors with the same name is  called constructor overloading.

#### 1. All constructors with the same name have a different number of parameters.
* For example numbers_sum(int n1, int n2) and another constructor as numbers_sum(int n1, int n2, int n3) is legal.

#### 2. All constructors with the same name and have the same number of parameters but of different data types is also legal.
* numbers_sum(int n1, int n2) and another constructor as numbers_sum(float n1, float n2).

# *Examples of legal and illegal constructor overloading*
* numbers_sum(int n1, int n2) and numbers_sum(double n1, double n2) is legal in constructor overloading.

* numbers_sum(int n1, int n2) and numbers_sum(int n1, double n2) is legal in constructor overloading.
* numbers_sum(int n1, int n2) and numbers_sum(double n1, int n2) is legal in constructor overloading.

* numbers_sum(int n1, int n2) and numbers_sum(int n1, int n2) is illegal in constructor overloading.

* numbers_sum(double n1, double n2) and numbers_sum(double n1, double n2) is illegal in constructor overloading.

* numbers_sum(int n1) and numbers_sum(int n1, int n2) is legal in constructor overloading.

* numbers_sum(int n1, int n2) and numbers_sum(int n1) is legal in constructor overloading.

# *Example of constructor overloading*

* Example of constructor overloading with a different number of parameters and constructors with the same name.
#include<iostream>
using namespace std;
class numbers_sum
{
public:
numbers_sum(int n1, int n2)
{
cout<<"sum of 2 numbers is = "<<endl<<n1+n2<<endl;
}
numbers_sum(int n1, int n2, int n3)
{
cout<<"sum of 3 numbers is = "<<endl<<n1+n2+n3<<endl;
}
};
int main()
{
numbers_sum a(3,4);
numbers_sum b(5,5,2);
}

## Output

Sum of two numbers is =7

the sum of three numbers is =12

* Another Example of Constructor Overloading In C++

/*  Constructor Overloading In C++  */
#include<iostream>
#include<conio.h>
using namespace std;
class Example {
    // Variable Declaration
    int n1, n2;
public:
    //Constructor wuithout Argument
    Example() {
        // Assign Values In Constructor
        n1 = 3;
        n2 = 7;
        cout << "\nIm Constructor";
    }
    //Constructor with Argument
    Example(int x, int y) {
        // Assign Values In Constructor
        n1 = x;
        n2 = y;
        cout << "\nI am Constructor";
    }
    void Display() {
        cout << "\nValues :" << n1 << "\t" <<"+"<< n2;
        cout<<"="<<n1+n2;
    }
};
int main() {
    Example Object(33, 7);
    Example Object2;
    // Constructor invoked.
    Object.Display();
    Object2.Display();
    // Wait For Output Screen
    getch();
    return 0;
}
## Output

I am Constructor

Im Constructor

Values :33      +7=40

Values :3      +7=10

## Program of Constructor Outside the Class
/*  Constructor Outside the Class*/
#include <iostream>
#include<conio.h>
using namespace std;
// Class Declaration
 
class Tutorials {
   int a, b;
   //Access - Specifier
public:
   //Constructor declaration
   Tutorials();
   //Member Functions for display 'a & b' Values.
 
   void Display() {
      cout << "Values :" << a << "\t" << b;
   }
};
// Constructor definition outside Class
Tutorials::Tutorials() {
   // Assign Values In Constructor
   a = 33;
   b = 7;
   cout << "This is Constructor Outside the Class\n";
}
int main() {
 
   // Object Creation For Class
   Tutorials Object;
   // Constructor invoked.
   Object.Display();
   // Wait For Output Screen
   getch();
   return 0;
}
## *Copy Constructor*
A copy constructor is just like a normal Constructor with the parameters, but the parameter is the same class object. The Copy constructor is helpful to initialize an object using another object of the same class.

### C++ Program of Copy Constructor
/*  Of Copy Constructor Overloading In C++*/
 
#include<iostream>
#include<conio.h>
 
using namespace std;
 
class Tutorials {
   // Member Variable Declaration
   int a, b;
public:
 
   //Normal Constructor with Argument
 
   Tutorials(int x, int y) {
      // Assign Values In Constructor
      a = x;
      b = y;
      cout << "\n I am Constructor";
   }
 
   //Copy Constructor with Obj Argument
 
   Tutorials(const Tutorials& obj) {
      // Assign Values In Constructor
      a = obj.a;
      b = obj.b;
      cout << "\nI am Copy Constructor";
   }
 
   void Display() {
      cout << "\nValues :" << a << "\t" << b;
   }
};
 
int main() {
   //Normal Constructor Invoked
   Tutorials Object(10, 20);
 
   //Copy Constructor Invoked - Method 1
   Tutorials Object2(Object);
 
   //Copy Constructor Invoked - Method 2
   Tutorials Object3 = Object;
 
   Object.Display();
   Object2.Display();
   Object3.Display();
   return 0;
}
# *Advantages of constructor overloading*
* It acts as compile-time polymorphism.
* Objects can be constructed in different ways.
* Helpful when we are programming the big problem because it is easy to remember the constructor name if many constructors are with the same name.