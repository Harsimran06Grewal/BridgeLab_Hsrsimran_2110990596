#include <iostream>

using namespace std;

void maxMin(int arr[], int size){
    int max=INT16_MIN;
    int min=INT16_MAX;
    for(int i=0; i<size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
    }
   int temp = max;
   max = min;
   min = temp;
   cout << "MAXIMUM value is: " << max << endl;
   cout << "MINimum value is: " << min << endl; 

 
}

int main(){
    int arr[] = {5, 15, 22, 1, -15, 24};
    int size = 6;
    maxMin(arr, 6);
}