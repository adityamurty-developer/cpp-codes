#include <iostream>
using namespace std;

class Student {
private:
    int age;
    int marks;

public:
    string name;

    void setAge(int a){
        if(a > 0)
            age = a;
        else
            age = 0;
    }

    int getAge(){
        return age;
    }

    void setMarks(int m){
        if(m >= 0 && m <= 100)
            marks = m;
        else
            marks = 0;
    }

    int getMarks(){
        return marks;
    }

    void showInfo(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
        cout << "--------------------" << endl;
    }
};

int main() {
    Student s1, s2, s3;

    s1.name = "Aditya";
    s1.setAge(20);
    s1.setMarks(95);

    s2.name = "Rahul";
    s2.setAge(19);
    s2.setMarks(88);

    s3.name = "Priya";
    s3.setAge(21);
    s3.setMarks(92);

    s1.showInfo();
    s2.showInfo();
    s3.showInfo();

    return 0;
}
