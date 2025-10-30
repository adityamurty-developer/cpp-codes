#include <iostream>
using namespace std;
int main(){
    int n=121, temp, rev=0;
    temp=n;
    while(n>0){
        rev=rev*10 + n%10;  // to shift the num 
        n/=10;   // to remove last digit   
    }
    if(temp==rev){
        cout<<" The num " << rev << " is a palindrome";
    } else {
        cout<<" The num is not a palindrome ";
    }
    return 0;
}