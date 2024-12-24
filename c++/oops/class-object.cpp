#include <iostream>

using namespace std;

class Teacher{
public:
    string name;
    string dept;
    string subject;
    double salary;
    
    void changeDept(string newDept){
        dept = newDept;
    }
    string getDept(){
        return dept;
    }
};

int main(){
    Teacher t1;
    t1.name = "simran";
    t1.dept = "CSE";
    t1.subject = "c++";
    t1.salary = 2500000;
    t1.changeDept("Mechnical");

    cout << t1.name << endl;
    cout << t1.getDept() << endl;

    return 0;
}