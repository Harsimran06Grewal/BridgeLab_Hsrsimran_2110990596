#include <iostream>

using namespace std;

class Teacher{
private:
    double salary;
public:
    string name;
    string dept;
    string subject;
    
    void changeDept(string newDept){
        newDept = dept;
    }

    //setter
    void setSalary(double s){
        salary = s;
    }
    //getter
    double getSalary(){
        return salary;
    }
};

int main(){
    Teacher t1;
    t1.name = "simran";
    t1.dept = "CSE";
    t1.subject = "c++";
    t1.setSalary(25000);

    cout << t1.getSalary() << endl;

    return 0;
}