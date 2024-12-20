#include <iostream>

using namespace std;

int main(){
    int withdrawal;
    cout << "Enter withdrawal amount: ";
    cin >> withdrawal;
    int balance = 50000;

    if(withdrawal <= 50000){
        cout << "sufficient balance" << endl;
        if(withdrawal % 100 == 0){
            cout << withdrawal; 
        }  
    }
    else{
        cout << "insufficient balance";
    }
    
    return 0;
}