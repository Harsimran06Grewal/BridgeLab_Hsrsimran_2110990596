#include <iostream>

using namespace std;

class Person{
public:
    string name;
    int roll_no;

    Person(string name, int roll_no){
        this->name = name;
        this->roll_no = roll_no;
    }
};

class Student : public Person{
public:
    int marks;

    Student(string name, int age, int marks) : Person(name, age){
        this->marks = marks;
    }
};

class GradStudent : public Student{
public:
    int research;

    GradStudent(string name, int age, int roll_no, int marks, int research) : Student(name, age, marks){
     this->research = research;  
    }
};

int main(){
    GradStudent gs1("simer", 24, 50, 100, 0);

    cout << gs1.research << endl;
}