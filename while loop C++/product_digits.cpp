#include <iostream>
using namespace std;

int main(){
    int n=12345, product=1;
    while(n!=0){
        int digit=n%10;
        product*=digit;
        n/=10;
    }
    cout<<"The product of digits is: " << product;
    return 0;
}