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

bool ispalindrome(int n){
    int rev = reverse(n);

    if(rev==n){
        return true;
    } else {
        return false;
    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int rev = reverse(n);
    if(ispalindrome(n)){
        cout<<"palindrome";
    } else {
        cout<<"not a palindrome";
    }
    return 0;
}