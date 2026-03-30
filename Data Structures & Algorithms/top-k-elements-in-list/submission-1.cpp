class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freqMap;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(freqMap.find(nums[i]) == freqMap.end()){
                freqMap.insert({nums[i],1});
            } else {
                freqMap[nums[i]]+=1;
            }
        }

        for (auto it = freqMap.begin(); it != freqMap.end(); it++) {
            if(it->second >= k){
                ans.push_back(it->first);
            }
        }
        return ans;
    }
};
