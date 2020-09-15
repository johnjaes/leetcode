class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        sort(A.begin(), A.end());
        int ans = 0;
        for(int i = 0 ; i < A.size() ; i++)
        {
            if( A[i] < 0 && K > 0)
            {
                ans -= A[i];
                K--;                
            }
            else { ans += A[i]; }          
        }
        
        K %= 2;
        int small = 99999;
        if(K != 0)
        {
            for(int i = 0 ; i < A.size() ; i++)
            {
                if(abs(A[i]) < small)
                {                    
                    small = abs(A[i]);
                }
            }            
            ans -= small*2;
        }
        return ans;
    }
};
