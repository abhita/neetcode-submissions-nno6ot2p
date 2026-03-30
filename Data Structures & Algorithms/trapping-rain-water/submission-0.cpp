class Solution {
public:
    int trap(vector<int>& height) {

        int trapWater=0;
        if(height.size() <=2){
            return 0;
        }
        int start=0;
        int end=1;
        int sumFactor = 0;
        while(start<end && end<height.size()){
            if(height[end] >= height[start]){
                trapWater = trapWater - sumFactor + height[start]*(end-start-1);
                start = end;
                end = start+1;
                sumFactor=0;
            }
            else{
                sumFactor+=height[end];
                end+=1;
            }
        }
        return trapWater;
        
    }
};

