class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> hp;
        for(int i=0;i<nums.size();i++){
            if(hp.find(nums[i]) != hp.end()){
                return true;
            } else {
                hp.insert(nums[i]);
            }
        }
        return false;
        
    }
};