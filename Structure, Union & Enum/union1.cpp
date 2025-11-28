#include <iostream>
using namespace std;

union marks
{
    int marks1;
    int marks2;
    int marks3;
};

int main(){
    union marks m1;
    m1.marks1 = 70;
    m1.marks2 = 82;
    m1.marks3 = 98;
    cout<< m1.marks2 << endl;

    return 0;
}

