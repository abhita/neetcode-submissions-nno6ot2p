class Solution {
public:
    bool isPalindrome(string s) {

        int size = s.size();
        int start = 0;

         int end = size-1;

        while(end > start){
            while(!alphaNum(s[start]) && start < end) start++ ;
            while(!alphaNum(s[end]) && end > start) end--;
            if(tolower(s[start]) != tolower(s[end])) return false;
            cout<<s[start]<<s[end]<<endl;
            start++;
            end--;
            
        }
        return true;
    }

    bool alphaNum(char c) {
        return (c >= 'A' && c <= 'Z' ||
                c >= 'a' && c <= 'z' ||
                c >= '0' && c <= '9');
    }
};
