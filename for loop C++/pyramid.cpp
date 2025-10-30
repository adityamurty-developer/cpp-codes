#include <iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=1; i<=n; i++){  // to print rows
        for(int j=1; j<=n-i; j++){   // to print spaces
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++){  // to print stars 
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}