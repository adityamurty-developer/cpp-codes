#include <iostream>
using namespace std;

int main(){
    int n=102030, count=0;
    while(n==0){
        n/=10;
        count++;
    }
    cout<<"The zero count is: "<< count ;
    return 0;
}