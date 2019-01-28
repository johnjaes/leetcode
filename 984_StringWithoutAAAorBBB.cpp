class Solution {
public:
    string strWithout3a3b(int A, int B) {
        string ans = "";
        int adds = 0;            
        
        if(A > B) 
        {                 
            adds = A-B;
            for(int i = 0 ; i < B ; i++)
            {
                if(adds > 0)
                {
                    ans += "a";
                    adds--;
                }
                ans += "ab";
            }
            while(adds > 0)
            {
                ans += "a";
                adds--;
            }
        }
        else
        {                 
            adds = B-A;
            for(int i = 0 ; i < A ; i++)
            {
                if(adds > 0)
                {
                    ans += "b";
                    adds--;
                }
                ans += "ba";
            }
            while(adds > 0)
            {
                ans += "b";
                adds--;
            }
        }
        return ans;
    }
};
