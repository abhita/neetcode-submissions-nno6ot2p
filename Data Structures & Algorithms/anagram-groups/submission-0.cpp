class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<unordered_map<char,int>> freqMap;
        for(int i=0;i<strs.size();i++){
                unordered_map<char,int> curFreq = getFreq(strs[i]);
                int match = 0;
                for(int k=0; k<ans.size() ; k++){
                    if(curFreq == freqMap[k]){
                        ans[k].push_back(strs[i]);
                        match =1;
                        break;
                    }
                }
                if(match == 0){
                ans.push_back({strs[i]});
                freqMap.push_back(getFreq(strs[i]));
                }
            
        }
        return ans;
    }

    unordered_map<char,int> getFreq(string inputStr){
        unordered_map<char,int> freqs;
        for(int j=0;j<inputStr.size();j++){
            if(freqs.find( inputStr[j] ) != freqs.end()){
                freqs[inputStr[j]]+=1;
            } else{
                freqs.insert({inputStr[j],1});
            }
        }
        return freqs;
    }
};
