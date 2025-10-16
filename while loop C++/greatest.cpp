#include <iostream>
using namespace std;

int main() {
    int num, digit, maxDigit = 0;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        digit = num % 10;          // to get last digit
        if (digit > maxDigit) {    // check if greater
            maxDigit = digit;      // updated max digit
        } 
        num = num / 10;            // remove last digit
    }

    cout << "Greatest digit is: " << maxDigit << endl;
    return 0;
}
