#include <iostream>
using namespace std;

int main(){
    int n=4;
    for(int i=1; i<=n; i++){   // for rows
        for(int j=1; j<=n; j++){    // for columns
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}