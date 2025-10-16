#include <iostream>
using namespace std;

int main(){
    int n, sum=0;
    cout<<"Enter numbers: ";
    cin>> n;
    while(n!=0){
        int digit=n%10;
        if(digit%2!=0){
            sum+=digit;
        }
        n/=10;
    }
    cout<<" The sum of odd digits are: " << sum << endl;
    return 0;
}