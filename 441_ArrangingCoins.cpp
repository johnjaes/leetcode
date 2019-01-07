class Solution {
public:
    int arrangeCoins(int n) {      
        if(n == 0) { return 0; }
        long long int left = (-1+sqrt(1 + 8*(long long)n))/2;
        long long int right = (-1-sqrt(1 + 8*(long long)n))/2; 
        return left > 0 ? floor(left) : floor(right) ;              
    }
};
