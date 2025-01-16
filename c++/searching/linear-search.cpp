#include <iostream>

using namespace std;

//function for linear search
int linearSearch(int n, int arr[], int target){
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int n = 5;
    int arr[] = {5, 4, 1, 2, 3};
    int target = 3;

    cout << linearSearch(5, arr, 3);

    return 0;
}