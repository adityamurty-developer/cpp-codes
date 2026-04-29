#include <iostream>
using namespace std;

int add(int n){
    int s = 0;
    for(int i=1; i<=n; i++){
        s+=i;
    }
    return s;
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>> n;
    int sum = add(n);
    cout<< "Sum of first "<< n << " natural numbers are: " << sum;
    return 0;
}