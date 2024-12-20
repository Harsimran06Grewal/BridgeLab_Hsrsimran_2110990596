#include <iostream>

using namespace std;

int main(){
    int withdrawal;
    cout << "Enter withdrawal amount: ";
    cin >> withdrawal;
    int balance = 50000;
    int thousand = 20;
    int five_hundred = 10;
    int hundred = 10;
    int ten = 10;
    int sum = 0;
    int count_thousand = 0;
    int count_five_hundred = 0;
    int count_hundred = 0;
    int count_ten = 0;
    int count =0;

    if(withdrawal <= 50000){
        cout << "sufficient balance" << endl;
        if((withdrawal % 1000 == 0) || (withdrawal % 500 ==0) || (withdrawal % 100 == 0) || (withdrawal % 10 == 0)){
            cout << withdrawal << endl; 
            if(thousand <= 20){
                sum += 1000;
                count_thousand++;
            }
            if(five_hundred <= 10){
                sum += 500;
                count_five_hundred++;
            }
            if(hundred <= 10){
                sum += 100;
                count_hundred++;
            }
            if(ten <= 10){
                sum += 10;
                count_ten++;
            } 
        }
        cout << count_thousand << endl;
        cout << count_five_hundred << endl;
        cout << count_hundred << endl;
        cout << ten << endl;
        count = count_thousand + count_five_hundred + count_hundred + count_ten;
        cout << count << endl;
    }
    else{
        cout << "insufficient balance";
    }

    return 0;
}