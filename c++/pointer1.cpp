#include <iostream>

using namespace std;

// int main(){
    // int a = 2000;
    // int* ptr = &a;
    // cout << &a << endl;
    // cout << ptr << endl;
    // cout << &ptr << endl;

    // float price = 2000.8987;
    // float* ptr2 = &price;
    // cout << &price <<endl;
    // cout << ptr2 << endl;
    // cout << &ptr2 << endl;

    // int a = 10;
    // int* ptr = &a;
    // int** ptr1 = &ptr;
    // cout << &a << endl;
    // cout << ptr << endl;
    // cout << &ptr << endl;
    // cout << ptr1 << endl;

// }


//practice question

int main(){
    int a = 5;
    int* p = &a;
    int** q = &p;
    cout << *p << endl;
    cout << **q << endl;
    cout << p << endl;
    cout << *q << endl;
}