#include <iostream>

using namespace std;

int binarySearch(int n, int arr[], int target){
    int start = 0;
    int end = n - 1;

    while(start <= end){
        int mid = (start + end) / 2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    return -1;
}

int main(){
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    int target = 5;

    cout << binarySearch(5, arr, 5);

    return 0;
}