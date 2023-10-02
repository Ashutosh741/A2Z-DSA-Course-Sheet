class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0, mini = prices[0],n = prices.size();
        for(int i=0;i<n;i++){
            if(prices[i] < mini)mini = prices[i];
            else if(mini < prices[i]){
                maxi = max(maxi, prices[i]-mini);
            }
        }
        return maxi;
    }
};


// little faster


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0, mini = prices[0],n = prices.size();
        for(int i=0;i<n;i++){
            if(prices[i] < mini)mini = prices[i];
            else if(maxi < prices[i]-mini){
                maxi = max(maxi, prices[i]-mini);
            }
        }
        return maxi;
    }
};
