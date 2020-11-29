class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> temp;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] == ')')
            {
                string str = "";
                while(temp.top() != '(')
                {
                    str += temp.top();
                    temp.pop();
                }
                temp.pop();
                for(int j = 0 ; j < str.size() ; j++)
                {
                    temp.push(str[j]);
                }
            }
            else
            {
                temp.push(s[i]);
            }
        }
        string ans = "";
        while(temp.empty() == false)
        {
            ans.insert(ans.begin(), temp.top());
            temp.pop();
        }
        return ans;
    }
};
