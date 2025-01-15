#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
    int singleNum(vector<int> &vec){
        int ans = 0;

        for(int val : vec){
            ans = ans ^ val;
        }

        return ans;
    }
};

int main(){
    vector<int> vec = {4, 1, 2, 1, 2};

    Solution s1;
    int singleNumber = s1.singleNum(vec);

    cout << singleNumber << endl;

    return 0;
}