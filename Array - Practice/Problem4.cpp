#include <iostream>
#include <climits>
using namespace std;

int getMax(int arr[], int size){
    int maxi = INT_MIN;
    for(int i=0; i<size; i++){
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int getMin(int arr[], int size){
    int mini = INT_MAX;
    for(int i=0; i<size; i++){
        mini = min(mini, arr[i]);
    }
    return mini;
}

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

    int maximum = getMax(arr, 5);
    int minimum = getMin(arr, 5);
    cout<<endl;
    cout<<"Maximum is: " << maximum << " and Minimum is: " << minimum;
    return 0;
}