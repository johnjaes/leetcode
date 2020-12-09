class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i = 0 ; i < tokens.size() ; i++)
        {
            if(tokens[i] == "+")
            {
                int aft = st.top();
                st.pop();
                int bef = st.top();
                st.pop();
                st.push(bef+aft);
            }
            else if(tokens[i] == "-")
            {
                int aft = st.top();
                st.pop();
                int bef = st.top();
                st.pop();
                st.push(bef-aft);
            }
            else if(tokens[i] == "*")
            {
                int aft = st.top();
                st.pop();
                int bef = st.top();
                st.pop();
                st.push(bef*aft);
            }
            else if(tokens[i] == "/")
            {
                int aft = st.top();
                st.pop();
                int bef = st.top();
                st.pop();
                st.push(bef/aft);
            }
            else
            {
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};
