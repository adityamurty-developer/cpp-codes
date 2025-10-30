#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n: ";
    cin>> n;
    bool isPrime = true;  // assume n is prime at start

for (int i = 2; i < n; i++) {
    if (n % i == 0) {
        isPrime = false;   // if divide, then not a prime
        break;
    }
}

if (isPrime == true)
    cout << "Prime number";
else
    cout << "Not a prime number";

    return 0;
}