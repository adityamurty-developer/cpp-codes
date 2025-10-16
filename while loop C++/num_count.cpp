#include <iostream>
using namespace std;

int main(){
    int num=123456, count;
    count=0;
    while(num!=0){
        num/=10;
        count++;
    }
    cout<<" The digit count is: " << count;
    return 0;
}