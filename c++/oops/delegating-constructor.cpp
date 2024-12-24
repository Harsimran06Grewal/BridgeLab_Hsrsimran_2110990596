#include <iostream>

using namespace std;

class Student{
public:
    string name;
    string dept;
    string subj;
    //Delegating Constructor
    Student(string name) : Student(name, "", ""){
        //cout << "I am a Delegating constructor" << endl;
    }
    //Delegating Constructor
    Student(string name, string dept) : Student(name, dept, ""){
    }
    //Primary Constructor 
    Student(string name, string dept, string subj){
        this->name = name;
        this->dept = dept;
        this->subj = subj;
    }
    void getInfo(){
        cout << name << endl;
        cout << dept << endl;
        cout << subj << endl;
    }
};

int main(){
    Student s1("simran","CSE","c++");
    s1.getInfo();
    
    Student s2("Jaswinder","BCA","");
    s2.getInfo();

    Student s3("Prabh","","");
    s3.getInfo();

    return 0;
}