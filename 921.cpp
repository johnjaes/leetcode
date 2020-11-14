class Solution {
public:
    int minAddToMakeValid(string S) {
        int left_pa = 0;
        int right_pa = 0;
        for(int i = 0 ; i < S.size() ; i++)
        {
            if(S[i] == '(') { left_pa++; }
            else
            {
                if(left_pa > 0) { left_pa--; }
                else
                {
                    right_pa++;
                }
            }
        }
        return left_pa + right_pa;
    }
};
