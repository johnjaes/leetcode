class Solution {
public:
    int countPrimes(int n) {
        vector<int> Prime(n , 0);
        int count = 0;
        int i = 2;
        while(i < n)
        {
            if(Prime[i] == 0) { count++; }
            for(int j = i*2 ; j < n ; j += i)
            {          
                Prime[j] = 1;
            }
            i++;
        }
        return count;
    }
};
