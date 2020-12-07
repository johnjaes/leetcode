class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        for(int i = 0 ; i < A.size() ; i++)
        {
            if(i%2 == 0) //even
            {
                if(A[i]%2 != 0)
                {
                    for(int j = i + 1 ; j < A.size() ; j+=2)
                    {
                        if(A[j]%2 == 0)
                        {
                            swap(A[i], A[j]);
                            break;
                        }
                    }
                }
            }
            else if(i%2 == 1) //odd
            {
                if(A[i]%2 != 1)
                {
                    for(int j = i + 1 ; j < A.size() ; j+=2)
                    {
                        if(A[j]%2 == 1)
                        {
                            swap(A[i], A[j]);
                            break;
                        }
                    }
                }
            }            
        }
        return A;
    }
};
