#include <iostream>

using namespace std;

class Teacher{
private:
    double salary;
public:
    string name;
    string dept;
    string subject;
    void setSalary(double s){
        salary = s;
    }
    double getSalary(){
        return salary;
    }
};

int main(){
    Teacher t1;
    t1.name = "simmi";
    t1.dept = "CSE";
    t1.subject = "C++";
    t1.setSalary(255000);

    cout << t1.getSalary() << endl;

    return 0;
}