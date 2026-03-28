#include<vector>
#include<algorithm>
using namespace std;
/*
 * @lc app=leetcode id=704 lang=cpp
 *
 * [704] Binary Search
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        //defining binarySearch function
            int s=0;
            int e= nums.size()-1;
            while(s <= e){
                int m = s +(e-s)/2;
                if(target < nums[m]){
                    e = m-1;
                }
                else if(target > nums[m]){
                    s = m + 1;
                }
                else{
                    return m;
                }
               
            }
             return -1;
    }
};
// @lc code=end

