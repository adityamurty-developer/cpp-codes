#include <iostream>
using namespace std;
int DigitCount(int num){
    int count=0;
    if(num==0){
        return 1;
    }
    while(num>0){
        num/=10;
        count++;
    }
    return count;
}
int main(){
    int num;
    cout<<"Enter a  num: ";
    cin>>num;
    cout<<"Digit Count is: "<< DigitCount(num)<<endl;
    return 0;
}