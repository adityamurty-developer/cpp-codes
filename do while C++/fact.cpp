#include <iostream>
using namespace std;

int main(){
    int i=1, fact=1;
    do{
        fact*=i;
        i++;
    } while(i<=5);
    cout<<"Factorial is: " << fact << endl;
    return 0;
}