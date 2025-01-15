#include <iostream>

using namespace std;

class Student{
public:
    string name;
    int age;

    Student(string name, int age){
        this->name = name;
        this->age = age;
    }
};

class Teacher : public Student{
public:
    string subject;

    Teacher(string name, int age, string subject) : Student(name, age){
    }
};

class Principal : public Student{
public:
    char grade;

    Principal(string name, int age, char grade) : Student(name, age){
    }
};

int main(){
    Principal p1("simer", 24, 'a');

    return 0;
}