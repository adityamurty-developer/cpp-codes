#include <iostream>
using namespace std;

int main(){
    int n=123, rev=0;
    while(n>0){
        int digit=n%10;   // to get the last digit
        rev=rev*10+digit;  // to shift the digit to left
        n=n/10;   // to remove the last digit
    }
    cout<<" The reverse number is: " << rev;
    return 0;
}