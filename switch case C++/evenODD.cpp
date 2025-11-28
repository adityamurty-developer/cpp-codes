#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>> num;
    switch(num%2){
        case 0: cout<< num << " is even";
                    break;
        case 1: cout<< num << " is odd";
                    break;
    }
    return 0;
}