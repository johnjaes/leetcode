class Solution {
public:    
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i = left ; i <= right ; i++)
        {
            bool check_sw = true;
            int temp = i;
            while(temp != 0)
            {
                int check = temp%10;
                temp /= 10;                
                if(check == 0)
                {  
                    check_sw = false;
                    break; 
                }
                if(i % check != 0)
                {
                    check_sw = false;
                    break;
                }
            }
            if(check_sw == true)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
