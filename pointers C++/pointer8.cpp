// swap two numbers using pointer
#include <iostream>
using namespace std;

int main(){
    int a=10, b=20;
    int *p=&a, *q=&b;
    int temp=*p;
    *p=*q;
    *q=temp;
    cout<< "value of a is: " << a << " " << "and value of b is: " << b ;

    return 0;
}