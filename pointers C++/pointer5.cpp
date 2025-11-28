// array act as a pointer
#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    cout<< arr << endl;  // --> it will prints the address of 1st element.
    cout<< &arr[0] << endl; // --> it will also prints the same address. 
    
    // --> to print further address we will use pointer arithmetic:
    cout<< "Address of arr[1] is: " << arr+1 << " and its value is: " << arr[1];
    return 0;
}