#include <iostream>

using namespace std;

class Account{
private:
    int balance;           // Data Hiding
    string password; 
public:
    string accountId;
    string username;

    void setBalance(int b){
        balance = b;
    }
    int getBalance(){
        return balance;
    }
};

int main(){
    Account a1;
    a1.setBalance(240000);
    cout << a1.getBalance() << endl;

    return 0;
}