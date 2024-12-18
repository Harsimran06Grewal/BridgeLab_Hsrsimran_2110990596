#include <iostream>

using namespace std;

int getMaxSum(int matrix[][3], int rows, int cols){
    int maxSum = 0;

    for(int i=0; i<rows; i++){
        int sum = 0;
        for(int j=0; j<cols; j++){
            sum += matrix[i][j];
        }

        maxSum = max(sum, maxSum);
    }

    return maxSum;
}

int main(){
    int rows = 3;
    int cols = 3;
    int matrix[3][3] = {{1, 2, 30}, {4, 5, 6}, {7, 8, 9}};
    cout <<  getMaxSum(matrix, 3, 3);

   return 0;
}