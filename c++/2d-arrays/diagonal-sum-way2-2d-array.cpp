#include <iostream>

using namespace std;

int diaSum(int matrix[][4], int rows, int cols){
  int sum = 0;
  for(int i=0; i<rows; i++){
    sum += matrix[i][i];
    if(i != rows - i - 1){
        sum += matrix[i][rows - i - 1];
    }
  }
  return sum;
}

int main(){
    const int rows = 4;
    const int cols = 4;
    int matrix[rows][cols] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    cout << diaSum(matrix, 4, 4);
    
    return 0;
}