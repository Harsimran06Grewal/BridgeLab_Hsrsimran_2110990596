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

class Person : public Student{
public:
    Person(string name, int age) : Student(name ,age){
    }
};

int main(){
    Person p1("simmi", 24);

    cout << p1.name << endl;

    return 0;
}