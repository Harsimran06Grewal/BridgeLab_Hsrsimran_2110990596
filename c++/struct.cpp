#include <iostream>

using namespace std;

typedef struct employee{
    int eId;
    char favChar;
    float salary;
}ep;

int main(){
    ep simran;
    simran.eId = 6;
    simran.favChar = 's';
    simran.salary = 90000000;
    cout << simran.eId << endl;
}
