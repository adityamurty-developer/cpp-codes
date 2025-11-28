// Pointer arithmetic concept

#include <iostream>
using namespace std;

int main(){
    int arr[3] = {10, 20, 30};
    int *p = arr;  // points to arr[0]

    cout << *p << endl;      // print 10
    cout << *(p + 1) << endl; // moves to next int and print 20
    cout << *(p + 2) << endl; // moves to next int and print 30
    cout << p+1 << " " << &(arr+1) ;
}
