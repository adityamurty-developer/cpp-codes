/* 1111
   2222
   3333 */
#include <iostream>
using namespace std;

int main(){
    int n=3;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=4){
            cout<< i << " ";
            j++;
        }
        cout<< endl;
        i++;
    }
    
    return 0;
}