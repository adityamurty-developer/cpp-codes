#include <iostream>
using namespace std;

int main(){
    int num=1221, rev=0;
    int temp=num;
    do{
        int digit=num%10;
        rev=rev*10+digit;
        num/=10;
    } while(num!=0);
    cout<<"Reverse is: " << rev << endl;
    if(temp==rev){
        cout<<"The given num is a pallindrome";
    }
    return 0;
}