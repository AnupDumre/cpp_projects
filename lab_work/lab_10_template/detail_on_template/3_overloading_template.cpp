//Illustration of overloading function of template

#include<iostream>
#include<cstring>
using namespace std;

template<class T>
T find_max(T a, T b){
    T result;
    if (a>b){
        result=a;
    }
    else{
        result=b;
    }
    return result;

}
//for string data types
char *find_max(char *a,char *b){
    char *result;
    if (strcmp(a,b)>0){
        result = a;
    }
    else{
        result = b;
    }
    return result;
}
int main()
{
    int i1 = 15, i2=45;
    cout<<"Greater number is: "<<find_max(i1, i2)<<endl;
    float f1 = 77.8, f2 = 77.7;
    cout<<"Greater float number is: "<<find_max(f1, f2)<<endl;
    char str1[]="apple" , str2[]="orange";
    cout<<"Greater string is: "<<find_max(str1,str2)<<endl;

    return 0;
}

/* OUTPUT

Greater number is: 45
Greater float number is: 77.8
Greater string is: orange

*/