#include <iostream>
using namespace std;

    int main(){
        enum day 
        {Mon, Tue, Wed, Thurs, Fri, Sat, Sun};

        cout<< Mon << endl;  // prints 0
        cout<< Tue << endl;  // prints 1
        cout<< Fri << endl;  // prints 4
        cout<< Sun << endl;  // prints 6

        return 0;
    }