#include <iostream>
using namespace std;
/* inline function 
inline int product(int a, int b){
    return a*b;
}
int main(){
    int a, b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    
    return 0;
} */

/* static function 
int product(int a, int b){
    static int c = 0; // This executes only once
    c = c++;
    return a*b+c;
}
int main(){
    int a, b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    
    return 0;
} */

/*  default function
int add(int a, int b=5){
    return a+b;
}

int main(){
    cout<<add(10)<<endl;   // 10 passes to a and default value set for b --> 15
    cout<<add(10,20)<<endl;  // 10 passes to a and 20 to b --> 30 default argument not used 
} */

// constant argument
float area(int r, const float pi=3.14){
    return pi*r*r;
}

int main(){
    cout<<area(2)<<endl;
}