#include <iostream>
using namespace std;

int main(){
    int n = 4;
    int i = 1;
    while(i <= n){
        int space = 1;
        while(space <= i - 1){
            cout << "  ";
            space++;
        }
        int star = 1;
        while(star <= n - i + 1){
            cout << star <<" ";
            star++;
        }
        cout << endl;
        i++;
    }
    return 0;
}