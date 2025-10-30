#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter no. of element: ";
    cin>> n;
    int arr[n];
    int sum=0;
    cout<<"enter " << n << " elements of array: ";
    for(int i=0; i<n; i++){
        cin>> arr[i];
        sum+=arr[i];
    }
    float avg=float(sum)/n;
    cout<<"avg is = " << avg;
    return 0;
}