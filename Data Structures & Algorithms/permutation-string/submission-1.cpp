class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        unordered_map<char,int> freqMaps1;
        if(s1.size() > s2.size()){
            return false;
        }
        int subSize = s1.size();


        for(int i=0; i<s1.size(); i++){
            if(freqMaps1.find(s1[i]) == freqMaps1.end()){
                freqMaps1[s1[i]] = 1;
            } else {
                 freqMaps1[s1[i]]+= 1;
            }
        }

        int start = 0;

        while(start <= s2.size() - subSize){
            if (checkSubstring(freqMaps1, s2.substr(start, subSize)) == true){
                return true;
            }
            start++;
        }

        return false;

        
    }

    bool checkSubstring(unordered_map<char,int> freqMap, string subString){
        unordered_map<char,int> freqMaps2;
        for(int i =0; i< subString.size(); i++){
            if(freqMaps2.find(subString[i]) == freqMaps2.end()){
                freqMaps2[subString[i]] = 1;
            } else {
                 freqMaps2[subString[i]]+= 1;
            }
        }
        cout<<"sub "<<subString<<endl;

        return freqMaps2 == freqMap;
    }
};
