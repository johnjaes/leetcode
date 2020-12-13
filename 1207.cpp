class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<bool> Counter(1001, false);
        
        int now = arr[0];
        int co = 1;
        for(int i = 1 ; i < arr.size() ; i++)
        {
            if(arr[i] == now) 
            {
                co++; 
                if(i == arr.size() - 1)
                {
                    if(Counter[co] == true) { return false; }
                    Counter[co] = true;
                }
            }
            else
            {
                now = arr[i];
                if(Counter[co] == true) { return false; }
                Counter[co] = true;
                co = 1;
                if(i == arr.size() - 1)
                {
                    if(Counter[co] == true) { return false; }
                    Counter[co] = true;
                }
            }
        }        
        
        return true;
    }
};
