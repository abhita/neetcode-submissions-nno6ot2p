class Solution {
public:

    int robber(vector<int>&nums, vector<int>&dp, int i){
        if(dp[i]!=-1) return dp[i];
        int pick = INT_MIN;
        int notPick = INT_MIN;
        if(i==0){
            return dp[0] = nums[0];
        }
        if(i>=nums.size()){
            return 0;
        }

        pick = robber(nums,dp,i-2)+nums[i];

        notPick = robber(nums,dp,i-1);
        
        return dp[i]=max(pick,notPick);
    }

    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return robber(nums,dp,nums.size()-1);
    }
};
