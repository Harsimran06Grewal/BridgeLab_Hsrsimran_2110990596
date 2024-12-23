#include <iostream>

using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4};
    int size = 4;
    int sum = 0;
    int product = 1;
    for(int i=0; i<size; i++){
        sum += arr[i];
        product *= arr[i];
    }

    cout << "sum of all numbers: " << sum << endl;
    cout << "product of all numbers: " << product << endl;
}
