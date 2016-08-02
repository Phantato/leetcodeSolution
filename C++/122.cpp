class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i, sum = 0, len = prices.size(), cost;
        if(len < 2) {
            return sum;
        }
        for(cost = 0; cost < len; cost = i) {
            i = cost + 1;
            while(i < len && prices[i] > prices[i - 1]) {
                i++;
            }
            sum += prices[i - 1] - prices[cost];
        }
        return sum;
    }
};
