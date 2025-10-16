#include <iostream>
using namespace std;

int main(){
    int i=1, product=1;
    while(i<=5){
        product*=i;
        i++;
        
    }
    cout<<"Product is: " << product;
    return 0;
}