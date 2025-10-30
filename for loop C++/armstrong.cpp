#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, digit;
    double sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    int temp = num;
    int count = 0;

    // Count digits
    while (temp != 0) {
        count++;
        temp /= 10;
    }

    temp = num;

    // sum of each digit count
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    if ((int)sum == num)
        cout << num << " is an Armstrong num.";
    else
        cout << num << " is not an Armstrong num.";

    return 0;
}
