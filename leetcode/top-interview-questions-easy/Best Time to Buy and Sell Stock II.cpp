class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum = 0;
        int peak = prices[0], val = prices[0];
        for(int i = 1; i < prices.size(); i++){
            if(peak < prices[i]){
                peak = prices[i];
            }else{
                sum += peak - val;
                val = prices[i];
                peak = prices[i];
            }
            if( i == prices.size() - 1){
                sum += peak - val;
            }
        }
        return sum;
    }    
};