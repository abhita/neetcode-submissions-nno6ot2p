class Solution {
public:

    void targetSum(vector<int>& nums, int target, vector<int> ds, vector<vector<int>>& ans,int i){
 
        if (target == 0 && i>=nums.size()){
            ans.push_back(ds);
            return;
        } 
        if(target < 0) return;
        if(i>=nums.size()){
            return;
        }

        ds.push_back(nums[i]);
        targetSum(nums,target-nums[i],ds,ans,i);
        ds.pop_back();
        targetSum(nums,target,ds,ans,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> ds;

        targetSum(nums,target,ds,ans,0);
        return ans;
        
    }
};
