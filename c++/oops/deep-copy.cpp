#include <iostream>

using namespace std;

class Student{
public:
    string name;
    double* cgpaPtr;
    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    Student(Student &obj){
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }
    void getInfo(){
        cout << name << endl;
        cout << *cgpaPtr <<endl;
    }
};

int main(){
    Student s1("simran", 9.8);
    Student s2(s1);
    *(s2.cgpaPtr) = 8.9;
    s1.getInfo();
    s2.name = "neha";
    s2.getInfo();

    return 0;
}
