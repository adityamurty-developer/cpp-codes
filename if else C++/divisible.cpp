// divisible by 5 and 11 or not

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter a number: ";
    cin>> num;
    if((num%5==0) && (num%11==0)){
        cout<<"num is divisible by 5 and 11.";
    } else {
        cout<<"not divisible!!";
    }
    return 0;
}