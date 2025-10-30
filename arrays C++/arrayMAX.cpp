#include <iostream>
using namespace std;

int main(){
    int num[5]={1,2,3,4,5};
    int max=num[0];
    for(int i=1; i<5; i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    cout<<"max is: " << max ;
    return 0;
}