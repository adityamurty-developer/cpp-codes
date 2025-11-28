// print values of array using pointer

#include <iostream>
using namespace std;

int main(){
    int arr[4]={1,2,3,4};
    int *p=arr;
    for(int i=0; i<4; i++){
        cout<< *(p+i) << "  ";
    }
    return 0;
}