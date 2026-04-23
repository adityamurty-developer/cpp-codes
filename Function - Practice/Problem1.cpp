#include <iostream>
using namespace std;

int power(int a, int b){
    int ans = 1;
    for(int i = 1; i<=b; i++){
        ans = ans*a;
    }
    return ans;
}

int main(){
    int a, b;
    cout<<"Enter value of a: ";
    cin>> a;
    cout<<"Enter power of a: ";
    cin>> b;
    int ans = power(a, b);
    cout<< a << " raise to the power " << b << " is: " << ans << endl;
    return 0;
}