#include <iostream>
using namespace std;

int main(){
    int arr[5]={4,6,12,2,10};
    int min=arr[0];
    for(int i=1; i<5; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"min is: " << min;
    return 0;
}