#include <iostream>

using namespace std;

//function to implement insertion sort
void insertionSort(int n, int arr[]){
    for(int i = 1; i < n; i++){
        int curr = arr[i];
        int prev = i - 1;

//finding the correct position to insert
        while(prev >= 0 && arr[prev] > curr){
            arr[prev + 1] = arr[prev];
            prev--;
        }

//inserting
        arr[prev + 1] = curr;
    }
}

//function to print array
void printArr(int n, int arr[]){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main(){
     int n = 5;
    int arr[] = {5, 4, 1, 3, 2};
    
    cout << "Original array: " << endl;
    printArr(5, arr);

    insertionSort(5, arr);

    cout << "Sorted array: " << endl;
    printArr(5, arr);

    return 0;
}