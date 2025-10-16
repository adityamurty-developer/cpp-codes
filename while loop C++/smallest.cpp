#include <iostream>
using namespace std;

int main(){
   int num, digit, minDigit=9;
   cout<<" Enter a number: ";
   cin>> num; 
   while(num!=0){
    digit=num%10;
    if(digit<minDigit){
        minDigit=digit;
    }
     num/=10;
   }
   cout<<"The smallest no. is: " << minDigit;
    return 0;
}