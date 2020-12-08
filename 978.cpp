class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        vector<int> up_DP(arr.size(), 0);
        vector<int> down_DP(arr.size(), 0);
        up_DP[0] = 1;
        down_DP[0] = 1;
        
        int ans = 1;
        
        for(int i = 1 ; i < arr.size() ; i++)
        {
            if(i%2 == 0)
            {
                if(arr[i] > arr[i-1])
                {
                    up_DP[i] = up_DP[i-1]+1;
                    ans = max(ans, up_DP[i]);
                    down_DP[i] = 1;
                }
                else if(arr[i] < arr[i-1])
                {
                    up_DP[i] = 1;
                    down_DP[i] = down_DP[i-1] + 1;
                    ans = max(ans, down_DP[i]);
                }
                else
                {
                    up_DP[i] = 1;
                    down_DP[i] = 1;
                }
            }
            else
            {
                if(arr[i] < arr[i-1])
                {
                    up_DP[i] = up_DP[i-1]+1;
                    ans = max(ans, up_DP[i]);
                    down_DP[i] = 1;
                }
                else if(arr[i] > arr[i-1])
                {
                    up_DP[i] = 1;
                    down_DP[i] = down_DP[i-1] + 1;
                    ans = max(ans, down_DP[i]);
                }
                else
                {
                    up_DP[i] = 1;
                    down_DP[i] = 1;
                }
            }
        }        
        return ans;
    }
};
