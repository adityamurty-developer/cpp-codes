#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n <= 1){
        return false;
    }

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}

int countPrimeDigits(int n){
    int count = 0;

    while(n != 0){
        int digit = n % 10;

        if(isPrime(digit)){
            count++;
        }

        n /= 10;
    }

    return count;
}

int main(){
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int result = countPrimeDigits(n);

    cout << "Count of prime digits: " << result;

    return 0;
}