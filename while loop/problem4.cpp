// print all even numbers from 0 to n

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int i = 0;
    while(i<=n){
        if(i%2==0){
            cout<< i << " ";
        }
        i++;
    }
    return 0;
}