class Solution {
public:    
    string countAndSay(int n) {
        string ans = "1";
        for(int i = 1 ; i < n ; i++)
        {
            string temp;
            char tc = ans[0];
            int count = 1;
            for(int j = 1 ; j < ans.size() ; j++)
            {
                if(tc != ans[j])
                {
                    temp += ((char)count+48);
                    temp += tc;
                    tc = ans[j];
                    count = 1;
                }
                else { count++; }
            }
            temp += ((char)count+48);
            temp += tc;            
            ans = temp;
        }
        return ans;
    }
};
