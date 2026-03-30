class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> freq;
        for(int i=0;i< nums.size();i++){
            int targetSum = target - nums[i];
            if(freq.find(targetSum) != freq.end()){
                return {freq[targetSum],i};
            } else {
                freq.insert({nums[i],i});
            }
        }

    }
};
