#include <iostream>
using namespace std;

int main(){
    int n=24679, evencount=0, oddcount=0;
    while(n!=0){
        int digit=n%10;
        if(digit%2==0){
            evencount++;
        } else {
            oddcount++;
        }
        n/=10;
    }
    cout<< "even count is:" << evencount << " and " << "odd count is: " << oddcount;
    return 0;
}