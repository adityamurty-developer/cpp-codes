#include <iostream>
using namespace std;

int main(){
    int n=180, sum=0;
    int temp=n;
    while(n!=0){
        int digit=n%10;
        sum+=digit;
        n/=10;
    }
    cout<<"The sum of numbers is: " << sum << endl;
    if(temp%sum==0){
        cout<<"its a harshad no!!";
    } else {
        cout<<"its not a harshad number!!";
    }
    return 0;
}