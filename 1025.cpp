class Solution {
public:
    bool divisorGame(int N) {
        vector<bool> DP;
        DP.push_back(false); //N == 0
        DP.push_back(false); //N == 1
        for(int i = 2 ; i <= N ; i++)
        {
            bool CanWin = false;
            for(int j = 1 ; j <= sqrt(i) ; j++)
            {
                if(i % j == 0 && DP[i - j] == false)
                {
                    CanWin = true;
                    break;
                }
            }
            DP.push_back(CanWin);
        }
        return DP[N];
    }
};
