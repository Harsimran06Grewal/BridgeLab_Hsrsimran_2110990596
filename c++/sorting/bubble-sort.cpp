#include <iostream>

using namespace std;

// function to swap the two elements
void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

//function to implement bubble sort
void bubbleSort(int n, int arr[]){
    for(int i = 0; i < n - 1; i++){
          bool isSwap = false;
        for(int j = 0; j < n - 1 - i; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if(!isSwap){
        return;
        }
    }
}

// function to print array
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

    bubbleSort(5, arr);

    cout << "Sorted array: " << endl;
    printArr(5, arr);

    return 0;
}