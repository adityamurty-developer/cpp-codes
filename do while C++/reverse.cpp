#include <iostream>
using namespace std;

int main(){
    int num=1234, rev=0;
    do{
        int digit=num%10;   // remainder
        rev=rev*10+digit;   // get reverse num
        num/=10;    // to remove last digit
    } while(num!=0);
    cout<<"Reverse is: " << rev;
    return 0;
}