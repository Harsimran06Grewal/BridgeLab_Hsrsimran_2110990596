#include <iostream>
#include <vector>

using namespace std;

// class Solution{
// public:
//     void reverse(vector<int> &vec){
//          for(int i = vec.size() - 1; i >= 0; i--){
//             cout << vec[i] << " ";
//          }
//          cout << endl;
//     }
// };

class Solution{
public:
    void reverse(vector<int> &vec){
         int start = 0;
         int end = vec.size() - 1;

         while(start < end){
            int temp = vec[end];
            vec[end] = vec[start];
            vec[start] = temp;
            start++;
            end--;
         }

         for(int i = 0; i < vec.size(); i++){
            cout << vec[i] << " ";
         }
    }
};

int main(){
    vector<int> vec = {1, 2, 3, 4, 5};

    Solution s1;
    s1.reverse(vec);
}