#include <iostream>

using namespace std;

class Student{
public:
    string name;
    string subject;
    int* cgpaPtr;
    Student(string name, string subject, int cgpa){
        this->name = name;
        this-> subject = subject;
        cgpaPtr = new int;
        *cgpaPtr = cgpa;
    }
    ~Student(){
        cout << "Hi, I am deleting everything";
        delete cgpaPtr;
    }
    void getInfo(){
        cout << name << endl;
        cout << subject << endl;
        cout << *cgpaPtr << endl;
    }
};

int main(){
    Student s1("simran", "c++", 9.8);
    s1.getInfo();
}