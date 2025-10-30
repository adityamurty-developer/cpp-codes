#include <iostream>
using namespace std;

int main(){
    // An array is a collection of elements of the same data type stored at contiguous memory locations.
    int a[3] = {10, 15, 20};
    cout<< a[0] << endl;
    cout<< a[1] << endl;
    cout<< a[2] << endl;
    // You can change the value of array
    a[2] = 30;
    cout<< a[0] << endl;
    cout<< a[1] << endl;    
    cout<< a[2] << endl;   // here we will see the value 30
    
    return 0;
}