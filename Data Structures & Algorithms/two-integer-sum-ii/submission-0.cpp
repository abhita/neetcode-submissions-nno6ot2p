class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        vector<int> ans;
        
        for(int i=0;i<numbers.size()-1;i++){
            int newIndex = binarySearch(numbers,i,target-numbers[i]);
            if(newIndex!=-1 && newIndex > i){
                ans.push_back(i+1);
                ans.push_back(newIndex+1);
                return ans;
            }
        }

        return ans;
        
    }

    int binarySearch(vector<int>& nums, int index, int target){
       
        int start = index+1;
        int right = nums.size()-1;
        
      //  cout<<

        while(right >= start){
          
            int mid = (start+right)/2;

            if(nums[mid] == target ) return mid;
            if(nums[mid] > target ) right = mid -1;
            if(nums[mid] < target) start = start +1;
        }
        return -1;
    }
};


