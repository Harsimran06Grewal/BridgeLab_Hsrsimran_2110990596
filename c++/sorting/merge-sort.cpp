#include <iostream>

using namespace std;

void merge(int arr[], int si, int mid, int ei){
    int temp[ei - si + 1];
    int i = si; //iterator for left part
    int j = mid + 1; //iterator for right part
    int k = 0; //iterator for temp array

    //merge smaller elements first
    while(i <= mid && j <= ei){
        if(arr[i] < arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
        }
    }

    //remaining elements of left part
    while(i <= mid){
        temp[k++] = arr[i++];
    }

    //remaining elements of right part
     while(j <= ei){
        temp[k++] = arr[j++];
    }

    //copying elements of temp array to original array
    for(k = 0, i = si; k < ei - si + 1; i++, k++){
        arr[i] = temp[k];
    }
}

//function to sort left and right part 
void mergeSort(int arr[], int si, int ei){
    //base case
    if(si >= ei){
        return;
    }

    int mid = si + (ei - si) / 2; //for calculating mid 

    mergeSort(arr, si, mid); //sort left part of array
    mergeSort(arr, mid + 1, ei); //sort right part of array

    merge(arr, si, mid, ei); //merge left and right sorted array
}

void printArray(int n, int arr[]){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {6, 3, 9, 5, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(n, arr);

    mergeSort(arr, 0, n-1);
    
    cout << "Sorted array: ";
    printArray(n, arr);

    return 0;
}