#include <iostream>
using namespace std;

struct Student {
    string name;
    int JN;
    float sr;
};

int main() {
    Student s[3] = {
        {"Dhoni", 7, 173.34},
        {"Rohit", 45, 165.85},
        {"Kohli", 18, 151.23},
    };

    cout << s[0].name << " " << s[0].JN << " " << s[0].sr << endl;
    cout << s[1].name << " " << s[1].JN << " " << s[1].sr << endl;
    cout << s[2].name << " " << s[2].JN << " " << s[2].sr << endl;

    return 0;
}
