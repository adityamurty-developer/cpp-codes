/*  1 1 1
    2 2 2
    3 3 3  */

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    int i = 1;
    int count = 1;

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << count << " ";
            j++;
        }
        cout<<endl;
        count++;
        i++;
    }
    return 0;
}