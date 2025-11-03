#include <iostream>
using namespace std;

int main(){
    float a,b;
    char op;
    cout<<"Enter value of a: ";
    cin>> a;
    cout<<"Enter vlaue of b: ";
    cin>> b;
    cout<<"Enter operation(+, -, *, /): ";
    cin>> op;
    switch(op)
    {
        case '+': cout<<"Sum = " << a+b;
                    break;
        case '-': cout<<"Subtract = " << a-b;
                    break;
        case '*': cout<<"Multiply = " << a*b;
                    break;
        case '/': if(b!=0)
                  cout<<"Division = " << a/b;
                  else
                  cout<<"Error divison by 0 not allowed!";
                    break;
        default : cout<<"Invalid operation";
    }
    return 0;
}