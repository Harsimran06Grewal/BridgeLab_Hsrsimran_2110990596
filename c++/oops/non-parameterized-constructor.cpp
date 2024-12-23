#include <iostream>

using namespace std;

class Teacher{
public:
    Teacher(){                // non parameterized constructor
        dept = "CSE";
    }
    string name;
    string subject;
    string dept;
};

int main(){
    Teacher t1;
    t1.name = "simran";
    t1.subject = "C++";

    cout << t1.dept << endl;

    return 0;
}