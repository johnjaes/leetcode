class Solution {
public:
    string removeOuterParentheses(string S) {
        stack<char> temp;
        string ans = "";
        int count_left = 0;
        int count_right = 0;
        for(int i = 0 ; i < S.size() ; i++)
        {
            if(S[i] == '(')
            {
                count_left++;
                temp.push(S[i]);
            }
            else if(S[i] == ')')
            {
                count_right++;                
                if(count_right == count_left)
                {
                    string new_str = "";
                    while(temp.size() > 1)
                    {
                        new_str.insert(new_str.begin(), temp.top());
                        temp.pop();
                    }
                    temp.pop();
                    ans += new_str;                         
                    
                    count_left = 0;
                    count_right = 0;
                }
                else
                {
                    temp.push(S[i]);
                }
            }
        }
        return ans;
    }
};
