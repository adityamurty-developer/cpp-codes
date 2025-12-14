/*  A
    B C
    D E F
    G H I J  */
#include <iostream>
using namespace std;

int main(){
    int n=4;
    int i=1;
    char value='A';
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<value<<" ";
            value++;
            j++;
        }
        cout<<endl;
        i++;

    }
    return 0;
}