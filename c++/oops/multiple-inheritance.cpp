#include <iostream>

using namespace std;

class Student{
public:
    string name;
    int roll_no;

    Student(string name, int roll_no){
        this->name = name;
        this->roll_no = roll_no;
    }
};

class Teacher{
public:
    string subject;
    int salary;

    Teacher(string subject, int salary){
        this->subject = subject;
        this->salary = salary;
    }
};

class TeachingAssisant : public Student, Teacher{
public:
    TeachingAssisant(string name, int roll_no, string subject, int salary) : Student(name, roll_no), Teacher(subject, salary){
    }
};

int main(){
    TeachingAssisant("simer", 24, "c++", 24500);

    return 0;
}