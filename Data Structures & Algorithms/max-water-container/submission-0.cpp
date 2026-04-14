class Solution {
public:
    int maxArea(vector<int>& heights) {

        if(heights.size() <= 1){
            return heights.size();
        }

        int l = 0;
        int r = heights.size()-1;
        int maxHeight = 0;

        while(r > l){
            int newHeight = min(heights[l],heights[r]) * (r-l);
            maxHeight = max(maxHeight,newHeight);
            if(heights[l] <= heights[r]) l++;
            else r--;
            

        }
        return maxHeight;


        
    }
};
