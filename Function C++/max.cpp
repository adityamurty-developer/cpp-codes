#include <iostream>
using namespace std;

int findmax(int a, int b){
    if(a>b) {
    return a;
    }
    else {
    return b;
    }
}
int main(){
    int a, b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Max no. is: "<< findmax(a,b);
    return 0;
}