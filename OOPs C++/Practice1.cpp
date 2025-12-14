#include<iostream>
using namespace std;

class Student{
private:
    int age;

public: 
        string name;
public:
    void setAge(int a){    // setter age
        age = a;
    }

    int getAge(){          // getter age
        return age;
    }
};

int main(){
    Student s;
    s.name="Adi";
    s.setAge(20);
    cout<<"hey i am "<< s.name << endl;
    cout << s.getAge();
}
