class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        int sum_A = 0;
        int sum_B = 0;
        vector<int> ans;
        for(int i = 0 ; i < A.size() ; i++)
        {
            sum_A += A[i];
        }
        for(int j = 0 ; j < B.size() ; j++)
        {
            sum_B += B[j];
        }
        for(int i = 0 ; i < A.size() ; i++)
        {
            for(int j = 0 ; j < B.size() ; j++)
            {
                if(A[i] - B[j] == (sum_A - sum_B)/2 )
                {                    
                    ans.push_back(A[i]);
                    ans.push_back(B[j]);
                    return ans;
                }
            }
        }
        return ans;
    }
};
