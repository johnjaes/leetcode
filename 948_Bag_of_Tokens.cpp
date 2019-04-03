class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int P) {
        sort(tokens.begin() , tokens.end());
        int left = 0;
        int right = tokens.size()-1;
        int get_P = 0;
        int max_P = 0;
        while(left <= right)
        {
            if(tokens[left] <= P)
            {
                get_P++;
                P -= tokens[left];
                left++;
                if(get_P > max_P) { max_P = get_P; }
            }
            else
            {
                if(get_P == 0 ) { break; }
                get_P--;
                P += tokens[right];
                right--;
            }
        }
        return max_P;
    }
};
