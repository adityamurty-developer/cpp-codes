#include <iostream>
using namespace std;

    struct employee
    {
        /* data */
        int id;
        char favChar;
        float salary;
    };
    
    int main(){
        struct employee aditya;
        aditya.id = 102;
        aditya.favChar = 'A';
        aditya.salary = 1200000;

        cout<<"Id of Aditya is: " << aditya.id << endl;
        cout<<"FavChar of Aditya is: " << aditya.favChar << endl;
        cout<<"Ctc of Aditya is: " << aditya.salary << endl;
    
    return 0;
    }