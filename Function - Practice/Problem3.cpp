#include <iostream>
using namespace std;

bool check(int n){
  if(n%2==0){
    return true;
  }  else {
    return false;
  }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>> n;

    bool result = check(n);
    cout<< result;
    return 0;
}