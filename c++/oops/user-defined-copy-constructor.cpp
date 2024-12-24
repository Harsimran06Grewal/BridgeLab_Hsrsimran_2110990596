#include <iostream>

using namespace std;

class Student{
public:
    string name;
    string dept;
    string subject;
    Student(string name, string dept, string subject){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
    }
    Student(Student &originalObj){   //user-defined copy constructor
        cout << "I am user-defined copy constructor" << endl; 
        this->name = originalObj.name;
        this->dept = originalObj.dept;
        this->subject = originalObj.subject;
    }
    void getInfo(){
        cout << name << endl;
        cout << dept << endl;
        cout << subject << endl;
    }
};

int main(){
    Student s1("simran", "CSE", "c++");
    Student s2(s1);
    s2.getInfo();

    return 0;
}