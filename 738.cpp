class Solution {
public:
    int monotoneIncreasingDigits(int N) {
        string str_N = to_string(N);
        int co = str_N.size();
        for(int i = str_N.size() - 1 ; i > 0 ; i--)
        {
            if(str_N[i] < str_N[i-1]) 
            {
                str_N[i-1]--;                 
                co = i;
            }
        }
        for(int i = co ; i < str_N.size() ; i++)
        {
            str_N[i] = '9';
        }
        return stoi(str_N);
    }
};
