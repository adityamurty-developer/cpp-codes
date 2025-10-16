// program to find roots of quadratic equation
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, D, root1, root2, rP, iP;

    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    // discriminant formula
    D = b * b - 4 * a * c;

    if (D > 0) {
        // for distinct and real
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        cout << "Roots are real and distinct." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } 
    else if (D == 0) {
        // for equal roots
        root1 = -b / (2 * a);
        cout << "Roots are real and equal." << endl;
        cout << "Root 1 = Root 2 = " << root1 << endl;
    } 
    else {
        // for imaginary roots
        rP = -b / (2 * a);
        iP = sqrt(-D) / (2 * a);
        cout << "Roots are imaginary." << endl;
        cout << "Root 1 = " << rP << " + " << iP << "i" << endl;
        cout << "Root 2 = " << rP << " - " << iP << "i" << endl;
    }

    return 0;
}
