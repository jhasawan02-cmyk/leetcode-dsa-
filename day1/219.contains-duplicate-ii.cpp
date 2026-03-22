#include<vector>
using namespace std;
/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();

        for(int i=0; i<=n;i++){
            for(int j=i+1; j <= k+i && j < n ; j++){
                if(nums[i] == nums[j]){
                    return true;
                }
            }
        }
        return false;
    }
};
// @lc code=end

