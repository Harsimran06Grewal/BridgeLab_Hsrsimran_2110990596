#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int roll_no;

    Person(string name, int roll_no) {
        this->name = name;
        this->roll_no = roll_no;
    }
};

class UniversityStudent : public Person { 
public:
    int marks;

    UniversityStudent(string name, int roll_no, int marks) : Person(name, roll_no) {
        this->marks = marks;
    }
};

class GradStudent : public UniversityStudent {
public:
    int research;

    GradStudent(string name, int roll_no, int marks, int research)
        : UniversityStudent(name, roll_no, marks) {
        this->research = research;
    }
};

class Student {
public:
    string name;
    int age;

    Student(string name, int age) {
        this->name = name;
        this->age = age;
    }
};

class Teacher : public Student {
public:
    string subject;

    Teacher(string name, int age, string subject) : Student(name, age) {}
};

class Principal : public Student {
public:
    char grade;

    Principal(string name, int age, char grade) : Student(name, age) {}
};

int main() {
    Principal p1("Simer", 24, 'A');

    return 0;
}
