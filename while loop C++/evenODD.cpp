#include <iostream>
using namespace std;

int main(){
    int n, count=0;
    cout<<"Enter numbers: ";
    cin>> n;
    while(n!=0){
        n/=10;
        count++;
    }
    cout<<"Digit count is: "<< count << endl;
    if(count%2==0){
        cout<<"The digit count is even !!";
    } else {
        cout<<"Digit count is odd";
    }
    return 0;
}