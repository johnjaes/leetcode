class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        sort(A.begin() , A.end());
        int max_n = A[A.size()-1];
        int min_n = A[0];
        return max(0 , max_n - min_n - 2*K);
    }
};
