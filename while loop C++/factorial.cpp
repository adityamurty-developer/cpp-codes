#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<" Enter n: ";
    cin>> n;
    long long fact=1;
    int i=1;
    while(i<=n){    // condition 
        fact*=i;
        i++;
    }
    cout<< " Factorial is: " << fact;
    return 0;
}