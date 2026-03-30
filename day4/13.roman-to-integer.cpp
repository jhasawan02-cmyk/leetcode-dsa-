#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        //storing the roman numerals charater with their resoective values
        unordered_map<char,int> value = {
            {'I',1}, {'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        //intialise the int res;
        int res = 0;
        //start the loop
        for(int i=0;i< s.length(); i++){
            if(i  < s.length() && value[s[i]] < value[s[i+1]]){
                res = res - value[s[i]];
            }
            else{
            res = res + value[s[i]];
            }
        };
        return res;
    }
};
// @lc code=end

