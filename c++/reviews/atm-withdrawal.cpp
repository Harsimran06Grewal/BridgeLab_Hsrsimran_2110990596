#include <iostream>

using namespace std;

int main(){
    int withdrawal;
    cout << "Enter withdrawal amount: ";
    cin >> withdrawal;
    if(withdrawal <= 50000){
        if(withdrawal % 100 ==0){
        cout << "sufficient balance" << endl;
        }
    }
    else{
        cout << "insufficient balance";
    }

    return 0;
}