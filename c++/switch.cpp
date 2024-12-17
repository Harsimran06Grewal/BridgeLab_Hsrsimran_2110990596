#include <iostream>

using namespace std;

int main(){
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    int a;
    cout << "enter value of a: ";
    cin >> a;
    int b;
    cout << "enter value of b: ";
    cin >> b;
    switch( choice ){
        case 1 :
        cout << "Addition" << " " << a + b;
        break;
        case 2 :
        cout << "Subtraction" << " " << a - b;
        break;
        case 3 :
        cout << "Multiplication" << " " << a * b;
        break;
        case 4 :
        cout << "Division" << " " << a / b;
        break;
        default :
        cout << "invalid choice";
        break;
    }
}