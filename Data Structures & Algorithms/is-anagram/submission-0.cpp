class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> charCount;

        if(s.size() != t.size()){
            return false;
        }

        for(int i=0;i< s.size();i++){
            if( charCount.find( s[i] ) != charCount.end() ){
                charCount[s[i]] += 1;
            } else {
                charCount[s[i]] = 1;
            }
        }

         for(int i=0;i< t.size();i++){
            if(charCount.find(s[i]) == charCount.end()){
                return false;
            } else {
                if(charCount[t[i]] <= 0){
                    return false;
                }
                charCount[t[i]] -= 1;
            }
        }
        return true;
        
    }
};
