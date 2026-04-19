// Prime number check

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    int num = 2;

    while(num <= n){
        int i = 2;

        while(i * i <= num){
            if(num % i == 0){
                break;
            }
            i++;
        }
        if(i * i > num){
            cout << num << " is Prime" << endl;
        } else {
            cout << num << " is Not Prime" << endl;
        }
        num++;
    }
    return 0;
}