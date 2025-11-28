// print array using pointer increment
#include <iostream>
using namespace std;

int main(){
    int arr[4]={1,2,3,4};
    int *p=arr;
    while(p<arr+4){
        cout<< *p << " ";
        p++;
    }
    return 0;
}