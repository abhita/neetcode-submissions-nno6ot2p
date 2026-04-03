class Solution {
public:

    void recur(vector<vector<int>> &ans, vector<int> &ds, int freqMap[], vector<int>& nums){

        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }
         for(int i=0;i<nums.size();i++){
            if(!freqMap[i]){
            ds.push_back(nums[i]);
            freqMap[i]=1;
            recur(ans,ds,freqMap,nums);
            ds.pop_back();
            freqMap[i]=0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;

        int freqMap[nums.size()] = {0};

        for(int i=0;i<nums.size();i++){
            ds.push_back(nums[i]);
            freqMap[i]=1;
            recur(ans,ds,freqMap,nums);
            ds.pop_back();
            freqMap[i]=0;
        }
        return ans;
        
    }
};
