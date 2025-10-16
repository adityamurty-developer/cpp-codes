#include <iostream>
using namespace std;

int main(){
    int num=12345, sum=0;
    while(num!=0){
        int digit=num%10;
        if(digit%2==0){
            sum+=digit;
        }
        num/=10;
    }
    cout<<"Sum of even numbers are:" << sum << endl;
    return 0;
}