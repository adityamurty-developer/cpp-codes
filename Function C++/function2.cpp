#include <iostream>
using namespace std;

// Function Prototype
// type function-name(arguments);
// int sum(int a, int b); --> Acceptable
// int sum(int a, b); --> Not Acceptable
int sum(int, int);
void g();
int main(){
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    cout<<"The sum is: " << sum(num1, num2);   
    g(); 
    return 0;
}

int sum(int a, int b){
    // formal parameters a and b will be taking values from actual parameters num1 and num2
    int c = a+b;
}

// Function with no return and no parameter
void g(){
    cout<<"\n Hello this is Adi";
}