class Solution {
public:

   void uniqueSets(vector<vector<int>>& ans, vector<int> ds, int i, vector<int>& nums){
        if(i>=nums.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[i]);
        uniqueSets(ans,ds,i+1,nums);
        ds.erase(ds.begin()+i);
        uniqueSets(ans,ds,i+1,nums);
        
   }

    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> ds;
        uniqueSets(ans,ds,0,nums);
        
        return ans;
    }
};
