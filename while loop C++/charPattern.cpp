/* a b c d 
   a b c d
   a b c d */
#include <iostream>
using namespace std;

int main(){
    int n=3;
    int i=1;
    while(i<=n){
        char j='a';
        while(j<='d'){
            cout<< j << " ";
            j++;
        }
        cout<< endl;
        i++;
    }
    return 0;
}