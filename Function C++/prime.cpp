#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n <= 1) return false;     // 0, 1, -ve → not prime
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(isPrime(n))
        cout << n << " is Prime";
    else
        cout << n << " is Not Prime";

    return 0;
}
