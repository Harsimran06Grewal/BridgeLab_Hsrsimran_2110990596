#include <iostream>

using namespace std;

class Student{
protected:
    string name;
    int age;
    Student(string name, int age){
    }
    void getInfo(){
        cout << name << endl;;
        cout << age << endl;
    }
public:
    int rollno;
    Student(int rollno) : rollno(rollno){
    }
    void getInfoRoll(){
        cout << rollno << endl;
    }
private:
    string grade;
    Student(int grade){
        this->grade = grade;
    }
    void getInfoGrade(){
        cout << grade << endl;
    }
};

class Person : public Student{

};

int main(){
    Person s1("simran", 21, 2110990596, "A+");

    return 0;
}