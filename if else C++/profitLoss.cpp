// calculate profit and loss based on cost price and selling price
#include <iostream>
using namespace std;

int main(){
    int cp, sp;
    cout<<"enter cost price: ";
    cin>> cp;
    cout<<"enter selling price: ";
    cin>> sp;
    if(sp>cp){
        cout<<"its a profit" << endl;
        cout<<"profit = " << sp-cp ;
    } else if(cp>sp){
        cout<<"its a loss" << endl;
        cout<<"loss = " << cp-sp ;
    } else {
        cout<<"no profit - no loss!!";
    }
    return 0;
}