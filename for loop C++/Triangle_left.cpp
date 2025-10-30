#include <iostream>
using namespace std;

int main(){
    for(int i=1; i<=5; i++){ // to print rows 
        for(int j=1; j<=i; j++){  //to print stars 
            cout<< "*";
        }
        cout<< endl;
    }
    return 0;
}