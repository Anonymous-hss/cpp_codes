#include <bits/stdc++.h>;

using namespace std;

class Solution {
    public: 
    int maxSubArray(vector<int> &nums){
        
        int max = 0;
        int subSum = 0;
        int isZero = 0;

        for(int i =0; i<nums.size();i++) {
            subSum = subSum + nums[i];
            if(subSum == 0) {
                isZero = 1;
            }
            for(int j = i+1; j < nums.size(); j++) {
                subSum = subSum + nums[j];
                if(max < subSum) {
                    max = subSum;
                }
            }
            if(nums.size() == 1){
                return nums[i];
            } else if (nums[i] > max) {
                max = nums[i];
            } 
            else {
                subSum = 0;
            }
        }

        if(isZero && max < isZero){
            max = 0;
        }

        return max;
        
    }
};

int main() {

    vector<int> nums = {-2,0,-1};
    Solution sol;

    cout<<sol.maxSubArray(nums);
    return 0;
}