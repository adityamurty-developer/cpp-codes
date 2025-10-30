#include <iostream>
using namespace std;

int main(){
    int n=1234;
    int i=0;
    for(; n!=0; n/=10){
        i++;
    }
    cout<<"Digit count is: " << i;
    return 0;
}