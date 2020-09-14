class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        if(A.size() == 0) { return 0; }
        if(A[0].size() == 0) { return 0; }
        int ans = 0;
        
        for(int x = 0 ; x <= A[0].size(); x++)
        {
            for(int i = 0; i < A.size()-1 ; i++)
            {
                if(A[i+1][x] < A[i][x]) 
                {
                    ans++; 
                    break;
                }                            
            }
        }        
        
        return ans;
    }
};
