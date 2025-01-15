#include <iostream>

using namespace std;

class Customer{
public:
    string name;
    int balance;
    int account_number;

    Customer(string name, int balance, int account_number){
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }

    //deposit
    void deposit(int amount){
        if(amount > 0){
            balance += amount;
            cout << "amount is deposited successfully" << endl;
        }
        else{
             throw "amount is not deposited because amount is less than zero";
        }
    }

    //withdraw
    void withdraw(int amount){
        if(amount > 0 && amount <= balance){
            balance -= amount;
        }
        else if(amount < 0){
            throw "amount should be greater than zero";
        }
        else{
            throw "your balance is low";
        }
    }

};

int main(){
    Customer c1("simran", 5000, 10);

    try{
    c1.deposit(100);
    c1.withdraw(6000);
    }
    catch(const char *e){
        cout << "Exception Occured : " << e << endl;
    }

    return 0;
}