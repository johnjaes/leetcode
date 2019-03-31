class Solution {
public:
    bool checkRecord(string s) {
        int A_num = 0;
        int L_num = 0;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] == 'A') 
            {
                A_num++; 
                L_num = 0;
            }
            else if(s[i] == 'L') 
            {
                L_num++; 
                if(L_num > 2) { return false; }
            }
            else
            {
                L_num = 0;
            }
        }
        if(A_num > 1 || L_num > 2) { return false; }
        return true;
    }
};
