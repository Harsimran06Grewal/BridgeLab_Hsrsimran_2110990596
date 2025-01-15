#include <iostream>

using namespace std;

int main(){
    char str[] = {'a', 'b', 'c', '\0'};
    cout << str << endl;
    //output : abc≡↓@ (invalid string)

    char str[] = {'a', 'b', 'c', '\0'};
    cout << str << endl;
    //output : abc (valid string)

    return 0;
}