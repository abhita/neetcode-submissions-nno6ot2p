class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        vector<int> stackElements;
        vector<int> answer;
        int i = temperatures.size()-1;
        while( i>= 0 ){
            if(stackElements.size() == 0){
                answer.push_back(0);
                stackElements.push_back(i);
                i--;
                continue;
            }
            if(temperatures[i] < temperatures[stackElements.back()]){
                answer.push_back(stackElements.back() - i);
                stackElements.push_back(i);
                i--;
            } else {
                stackElements.pop_back();
            }
            
        }
  
        reverse(answer.begin(),answer.end());
        return answer;
    }
};







