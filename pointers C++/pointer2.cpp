// pointer to pointer 
#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *b = &a;
    // pointer to pointer --> it stores the address of another pointer
    int **c = &b;
    cout<<"The address of a is: " << &a << endl;
    cout<<"The value at address b is: " << *b << endl;
    cout<<"The address of b is: " << c << endl;
    cout<<"The value at address c is: " << *c << endl;
    cout<<"The value at address value_at(value_at_c) is: " << **c;
    return 0;
}