#include <iostream>
using namespace std;

int main(){
    int marks;
    cout<<"enter your marks: ";
    cin>> marks;
    if(marks>=90){
        cout<<"your grade is A!!";
    } else if((marks>=80)&&(marks<90)){
        cout<<"your grade is B!!";
    } else if((marks>=65)&&(marks<80)){
        cout<<"your grade is C!!";
    } else if((marks>=50)&&(marks<65)){
        cout<<"your grade is D!!";
    } else {
        cout<<"your failed in the exam. STUDY HARD!!";
    }
    return 0;
}