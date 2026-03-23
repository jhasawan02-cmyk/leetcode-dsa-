#include<vector>
using namespace std;
/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n  = nums.size();
        //loop from index 0 to index n-1
        for(int i = 0; i<n ;i++){
            int remainder = target - nums[i];
        //loop from index 1 to index n
        for(int j = i+1; j<n; j++){
            if(remainder == nums[j]){
                return{i,j};
            }
                }
        }
        return{};
    }
     
};
// @lc code=end

