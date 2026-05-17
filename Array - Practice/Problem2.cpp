// Find minimum in array

#include <iostream>
using namespace std;

int main(){
    int n[5] = {2, 5, 13, 1, 9};
    int min = n[0];
    for(int i = 0; i<5; i++){
        if(min>n[i]){
            min = n[i];
        }
    }
    cout<<"Minimum number in array is: " << min << endl;
    return 0;
}