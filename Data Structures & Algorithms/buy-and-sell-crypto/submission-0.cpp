class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int start =0;
        int end = 1;

        int maxProf = 0;

        while(end < prices.size() && start <end){
            if(prices[start]>prices[end]){
                start = end;
                end=start+1;
            }else {
                maxProf = max(maxProf,prices[end]-prices[start]);
                end+=1;
            }
        }

        return maxProf;
       
        
    }
};
