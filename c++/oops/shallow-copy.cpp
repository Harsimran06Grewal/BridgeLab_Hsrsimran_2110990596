#include <iostream>

using namespace std;

class Student{
public:
    string name;
    float cgpa;
    Student(string name, float cgpa){
        this->name = name;
        this->cgpa = cgpa;
    }
    Student(Student &obj){
        this->name = obj.name;
        this->cgpa = obj.cgpa;
    }
    void getInfo(){
        cout << name << endl;
        cout << cgpa << endl;
    }
};

int main(){
    Student s1("simran", 9.8);
    s1.getInfo();
    Student s2(s1);
    s2.getInfo();

    return 0;
}