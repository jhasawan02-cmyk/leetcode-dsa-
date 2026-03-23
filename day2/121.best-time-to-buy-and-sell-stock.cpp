#include<vector>
#include<algorithm>
using namespace std;
/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       //assuming profit at day1 is 0 and buy at the first day
       int buyPrice = prices[0];
       int profit = 0;
       for(int i=1;i<prices.size();i++){
        if(prices[i]<buyPrice) buyPrice = prices[i];
        else if((prices[i] - buyPrice) > profit){
            profit = prices[i] - buyPrice;
        }
       }
       return profit;
    }
}; 
// @lc code=end

