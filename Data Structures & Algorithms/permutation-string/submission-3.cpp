class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        
        if(s1.size() > s2.size()){
            return false;
        }
        unordered_map<char,int> freqMaps1;
        unordered_map<char,int> freqMaps2;
        int subSize = s1.size();

        for(int i=0; i<s1.size(); i++){
            if(freqMaps1.find(s1[i]) == freqMaps1.end()){
                freqMaps1[s1[i]] = 1;
            } else {
                 freqMaps1[s1[i]]+= 1;
            }
        }

        int start = 0;
        int end = 0;

        while(end < s2.size()){

            if(freqMaps2.find(s2[end]) == freqMaps2.end()){
                freqMaps2[s2[end]] = 1;
            } else {
                 freqMaps2[s2[end]]+= 1;
            }

            if( end >= subSize - 1){
                if( freqMaps1 == freqMaps2){
                    return true;
                }
                else{
                    // cout<<"s2"<<""<<s2[start]<<s2[end]<<endl;
                    // for (auto it = freqMaps2.begin(); it != freqMaps2.end(); ++it) {
                    //     std::cout << it->first << ": " << it->second << std::endl;

                    // }
                    freqMaps2[s2[start]]--;
                    if(freqMaps2[s2[start]] == 0){
                        freqMaps2.erase(s2[start]);
                    }
                     start++;
                }
        
            }
            end++;
        }
        return false;
    }
        

   
};
