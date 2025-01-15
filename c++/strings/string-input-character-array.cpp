#include <iostream>

using namespace std;

int main(){
    char str[100];

    cout << "enter char array : ";
    cin >> str;

    cout << "Output : " << str << endl;

    char str[100];
    cout << "enter char array: ";
    cin.getline(str, 100, '$');

    cout << "Output" << str << endl;

    return 0;
}