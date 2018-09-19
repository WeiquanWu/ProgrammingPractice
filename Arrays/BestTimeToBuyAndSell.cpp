/*
Say you have an array for which the ith element is the price of a given stock on day i.

Design an algorithm to find the maximum profit. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times).

Note: You may not engage in multiple transactions at the same time (i.e., you must sell the stock before you buy again).
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //use dynamic programming to store prev results
       int n = prices.size();
        if (n < 2) {
            return 0;
        }
        
        int maxProfit = 0; // max profit
        int accumulatedChanges = 0; // accumulated changes
        for(int i = 1; i < n; i++){
    cout<< "i = " << i << endl;
                accumulatedChanges += prices[i] - prices[i - 1];
                cout<<"accumulated = " << accumulatedChanges<<endl;
            //changes are current price - previous price
            if(accumulatedChanges < 0) {accumulatedChanges = 0; cout<<"no profit, reset to 0" <<endl;} //no profit from i to i-1, reset accumulatedChanges
            
            if(accumulatedChanges > 0) {maxProfit += accumulatedChanges;    accumulatedChanges = 0;    cout<<"maxProfit = " << maxProfit<<endl;}

        }
        return maxProfit;