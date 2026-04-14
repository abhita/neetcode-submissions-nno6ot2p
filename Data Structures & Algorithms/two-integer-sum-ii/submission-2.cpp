class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        for(int i=0;i<numbers.size()-1;i++){
            int newIndex = binarySearch(numbers,i,target-numbers[i]);
            if(newIndex!=-1 && newIndex > i){
                return {i+1,newIndex+1};
            }
        }

        return {0,0};
        
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


