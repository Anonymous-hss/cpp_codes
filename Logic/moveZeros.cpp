#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            // for(int i = 0; i < nums.size(); i++) {
            //     if(nums[i] == 0) {
            //         nums.push_back(nums[i]);
            //     }
            // }
            auto it  = find(nums.begin(), nums.end(), 1);
            cout << it;

            // cout << find(nums.begin(), nums.end(), 1);
        }
};


int main () {
    vector<int> nums = {0,1,0,3,12};
    Solution sol;
    sol.moveZeroes(nums);
    return 0;
}
