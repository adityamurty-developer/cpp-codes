#include <iostream>
using namespace std;

int reverse(int n){
    int rev = 0;
    while(n!=0){
        int digit = n%10;
        rev = rev*10+digit;
        n/=10;
    }
    return rev;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int rev = reverse(n);
    cout<<"The reverse of number: " << n << " is " << rev << endl;
    return 0;
}