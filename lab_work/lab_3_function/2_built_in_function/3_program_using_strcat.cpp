#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char String_1[50] = "Program of C++";
    char String_2[50] = " using string concatenation. ";

    strcat(String_1,String_2);
    
    cout << "The entered string is:  "<<String_1 <<endl;

    return 0;

}