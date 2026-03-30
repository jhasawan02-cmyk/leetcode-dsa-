#include<iostream>
#include<string>
#include<cmath>
using namespace std;
/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        //converting given integer into string
        string s = to_string(x);
        int n = s.length();
        
        //checking if the given integer is a pallindrome or not
        for(int i=0; i<n/2; i++){
            if(s[i] != s[n-i-1]){
                return false;
            }
        }
        return true;
        
    }
};
// @lc code=end

