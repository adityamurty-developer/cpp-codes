// check a character is a uppercase/ lowercase/ digit / special character
#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter a character: ";
    cin>> ch;
    if((ch>='a')&&(ch<='z')){
        cout<<"the character is a lowercase.";
        } else if((ch>='A')&&(ch<='Z')){
            cout<<"the character is a uppercase.";
        } else if((ch>='0')&&(ch<='9')){
            cout<<"its a digit.";
        } else {
            cout<<"its a special character.";
        }
    return 0;
}