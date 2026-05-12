#include <iostream>
using namespace std;

int largestDigit(int n){
    int max = 0;
    while(n!=0){
        int digit = n%10;
        if(digit>max){
            max = digit;
        } 
        n/=10;
    }
    return max;
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>> n;
    int largest = largestDigit(n);
    cout<<"Largest digit is: "<< largest;
    return 0;
}