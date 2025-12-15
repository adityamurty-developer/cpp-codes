/*  D
    C D
    B C D
    A B C D  */

#include <iostream>
using namespace std;

int main(){
    int n=4;
    int i=1;
    while(i<=n){
        int j=1;
        char start='A'+n-i;
        while(j<=i){
            cout<<start<<" ";
            start++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}