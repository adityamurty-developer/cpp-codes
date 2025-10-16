#include <iostream>
using namespace std;

int main(){
      int i=1, sum=0;
    while(i<=20){
        if(i%2==0)
        sum+=i;
        i++;
    }
    cout<< "Sum of even no. is: " << sum;
    return 0;
}