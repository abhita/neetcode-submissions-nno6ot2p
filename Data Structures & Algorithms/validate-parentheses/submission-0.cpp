class Solution {
public:
    bool isValid(string s) {

        stack<char> st;

        unordered_map<char,char> brackets;
        brackets['[']=']';
        brackets['{']='}';
        brackets['(']=')';

        

        for(int i=0;i<s.size();i++){
 
            if(!st.empty() && brackets.find(st.top()) != brackets.end() && brackets[st.top()]== s[i]){
                st.pop();
                cout<<"pop "<<s[i];
            } else {
                st.push(s[i]);
                cout<<"push "<<s[i];
            }
          
        }

        return st.empty();
        
    }
};
