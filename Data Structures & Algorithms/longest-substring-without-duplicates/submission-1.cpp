class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0){
            return 0;
        }
        int longest = 1;
        unordered_map<char,int> freq;

        int start = 0;
        int end = 1;

        freq[s[start]] = 1;

        while(start<end && end < s.size()){
            if(freq.find(s[end]) == freq.end()){
                end+=1;
                freq[s[end]] =1;
                longest = max(longest,end-start+1);
            } else {
                //longest = max(longest, end - start);
                start = start+1;
                freq[s[start]] -=1;
            }
        }

        return longest;
        
    }
};


// a b c a b c b b


