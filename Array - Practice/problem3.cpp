// Find sum and average of an array

#include <iostream>
using namespace std;

int main(){
    int arr[5];
    for(int i=0; i<5; i++){
        cout<<"Enter array " << i << ": ";
        cin>> arr[i];
    }
    
    cout<<"Array is: ";

    for(int i=0; i<5; i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
    int sum = 0;
    for(int i=0; i<5; i++){
        sum+=arr[i];
    }
    cout<<"Sum of array is: " << sum << endl;
    float avg = (float)sum/5;
    cout<<"Average is: " << avg;

    return 0;
}