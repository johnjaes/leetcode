class Solution {
public:
    int findNthDigit(int n) {
        int ten_level = 1;
        long long int level_num = 9;
        while(n > ten_level * level_num)
        {
            n -= ten_level * level_num;
            ten_level++;
            level_num *= 10;
        }
        int target_num = (n-1) / ten_level;
        int target_digit = n % ten_level;
        if(target_digit == 0) { target_digit += ten_level; }
        int num = pow(10 , ten_level - 1) + target_num;
        for(int i = 0 ; i < ten_level - target_digit ; i++)
        {
            num /= 10;
        }
        return num%10;
        
    }
};
