class Solution {
public:
    vector<int> fibs;
    Solution()
    {
        fibs.push_back(0);
        fibs.push_back(1);
        for(int i = 0 ; i < 31 ; i++)
        {
            fibs.push_back(fibs[fibs.size()-2] + fibs[fibs.size()-1]);
        }
    }
    int fib(int N) {
        return fibs[N];
    }
};
