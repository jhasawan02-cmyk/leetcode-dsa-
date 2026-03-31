#include<iostream>
#include<vector>
#include<string>
using namespace std;
/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string prefix = "";
        for(int i = 0; i< strs[0].length(); i++){
            char current = strs[0][i];

            for(int j = 1; j <strs.size(); j++){
                if(i >= strs[j].length() || strs[j][i] != current){
                    return prefix;
                }
            }
            prefix += current;
        }
        return prefix;
    }
};
// @lc code=end

