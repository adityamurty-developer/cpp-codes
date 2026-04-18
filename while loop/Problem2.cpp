// Print square from 1 to n

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = 1;

    while(i<=n){
        int sq = i*i;
        cout<< sq << " ";
        i++;
    }
    return 0;
}