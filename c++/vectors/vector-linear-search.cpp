#include <iostream>
#include <vector>

using namespace std;

// class Solution{
// public:
//     int linearSearch(vector<int> &vec, int target){
//         int index = 0;
//         for(int val : vec){
//             if(val == target){
//                return index;
//             }
//             index++;
//         }
//         return -1;
//     }
// };

class Solution{
public:
    int linearSearch(vector<int> &vec, int target){
        for(int i = 0; i < vec.size(); i++){
            if(vec[i] == target){
                return i;
            }
        }
        return -1;
    }
};

int main(){
    vector<int> vec = {1, 2, 3, 4};
    int target = 1;

    Solution s1;
    int linearSearch = s1.linearSearch(vec, target);
    
    cout << linearSearch << endl;

    return 0;
}