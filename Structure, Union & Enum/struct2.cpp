#include <iostream>
using namespace std;

typedef struct student
{
    /* data */
    int id;
    int sem;
    float cgpa;
    char grade;
} ep;

int main(){
    ep Aditya;
    Aditya.id = 102;
    Aditya.sem = 3;
    Aditya.cgpa = 8.2;
    Aditya.grade = 'A';

    cout<<"College Id of Aditya: " << Aditya.id << endl;
    cout<<"Current Sem of Aditya: " << Aditya.sem << endl;
    cout<<"Current CGPA of Aditya in sem: " << Aditya.sem << " is: " << Aditya.cgpa << endl;
    cout<<"Grade of Aditya is: " << Aditya.grade << endl;

    return 0;
}
