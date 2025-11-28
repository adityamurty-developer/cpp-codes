// difference of two pointers

#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int *p1 = &arr[0];
    int *p2 = &arr[4];

    cout << (p2 - p1); // it gives 4

    return 0;
}