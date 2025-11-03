#include <iostream>
using namespace std;

int main() {
    float a, b, result;
    char op;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Enter operation (+, -, *, /, s): ";
    cin >> op;

    if (op == '+') {
        result = a + b;
        cout << "Result: " << result;
    } else if (op == '-') {
        result = a - b;
        cout << "Result: " << result;
    } else if (op == '*') {
        result = a * b;
        cout << "Result: " << result;
    } else if (op == '/') {
        if (b != 0) {
            result = a / b;
            cout << "Result: " << result;
        } else {
            cout << "Error: Division by zero not allowed!";
        }
    }  else {
        cout << "Invalid choice!";
    }

    return 0;
}
