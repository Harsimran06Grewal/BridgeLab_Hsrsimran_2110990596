#include <iostream>

using namespace std;

class Teacher{
public:
    Teacher(string n, string d, int s){            // parameterized constructor
        name = n;
        dept = d;
        salary = s;
    }
    string name;
    string dept;
    int salary;
    void getInfo(){
        cout << name << endl;
        cout << dept << endl;
        cout << salary << endl;
    }
};

int main(){
    Teacher t1("simran", "CSE", 25000);
    t1.getInfo();

    return 0;
}