#include <iostream>

using namespace std;

int main(){
    enum Meal {breakfast, lunch, Dinner};
    // cout << breakfast << endl;
    // cout << lunch << endl;
    // cout << Dinner << endl;
    //or
    Meal m1 = breakfast;
    Meal m2 = lunch;
    Meal m3 = Dinner;
    cout << m1 << endl;
    cout << m2 << endl;
    cout << m3 << endl;
}
