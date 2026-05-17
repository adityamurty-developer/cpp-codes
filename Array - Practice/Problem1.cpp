// Find maximum in array
#include <iostream>
using namespace std;

int main(){
    int n[5] = {1, 3, 8, 2, 5};
    int max = n[0];
    for(int i = 0; i<5; i++){
        if(max<n[i]){
            max = n[i];
        }
    }
    cout<< "max is: " << max << endl;
    return 0;
}