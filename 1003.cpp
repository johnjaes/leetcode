class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] == 'a') { st.push(s[i]); }
            else if(s[i] == 'b') { st.push(s[i]); }
            else if(s[i] == 'c')
            {      
                if(st.empty() == true) { return false; }
                if(st.top() == 'b')
                {
                    st.pop();                    
                    if(st.empty() == true) { return false; }
                    if(st.top() != 'a') { return false; }                 
                    st.pop();
                }
            }
        }
        return st.empty();
    }    
};
