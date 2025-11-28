// pointers basics
#include <iostream>
using namespace std;

int main(){
    //pointers --> data type which holds the address of other data types
    int a=5;
    int *b = &a;
    // & --> Address of operator
    cout<<"The address of a is: " << b << endl;
    cout<<"The address of a is: " << &a << endl;    // this will also stores the address of  a 
    // * --> (value at) Dereference operator  
    cout<<"The value at address b is: " << *b << endl;   
    return 0;
}