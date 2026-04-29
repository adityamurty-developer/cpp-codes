#include <iostream>
using namespace std;

int factorial(int n){
    int f = 1;
    for(int i = 1; i<=n; i++){
        f*=i;
    }
    return f;
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>> n;

    int fact = factorial(n);
    cout<< n << "! = " << fact << endl;
    return 0;
}