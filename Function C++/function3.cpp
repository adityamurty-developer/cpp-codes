#include <iostream>
using namespace std;

/* This will not swap a and b
swap(int a, int b){
    int temp = a;
    a = b; 
    b = temp;
} */

// Call by reference using pointers
void swappointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x=4, y=5;
    cout<<"The value at x is " <<x<<" and the value at y is "<<y<< endl;
    // swap(x,y);  --> this will not swap a and b
    swappointer(&x, &y);
    cout<<"The value at x is " <<x<<" and the value at y is "<<y<< endl;

    return 0;
}