/*  1
    2 3
    3 4 5
    4 5 6 7*/
#include <iostream>
using namespace std;

int main(){
    int n=4;
    int row=1;
    while(row<=n){
        int j=1;
        while(j<=row){
            cout<< row+j-1 << " ";
            j++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}