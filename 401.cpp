class Solution {
public:
    vector<string> ans;
    void CheckHour(int n, int now, int H_num, int total)
    {        
        if(total > 11) { return; }        
        if(n < H_num) { return; }
        CheckMin(total, n-H_num, 0, 0, 0);        
        for(int i = now+1 ; i <= 4 ; i++)
        {            
            int k = 0;
            if(i == 1) { k = 1; }
            else if(i == 2) { k = 2; }
            else if(i == 3) { k = 4; }
            else if(i == 4) { k = 8; }
            CheckHour(n, i, H_num+1, total + k);
        }
    }
    void CheckMin(int Hours, int n , int now, int M_num, int total)
    {
        if(total > 59) { return; }
        if(M_num > n) { return; }
        if(M_num == n)
        {
            string temp = to_string(Hours) + ":" + ((total >= 10) ? "" : "0") + to_string(total);
            ans.push_back(temp);
            return;
        }
        for(int i = now+1 ; i <= 6 ; i++)
        {
            int k = 0;
            if(i == 1) { k = 1; }
            else if(i == 2) { k = 2; }
            else if(i == 3) { k = 4; }
            else if(i == 4) { k = 8; }
            else if(i == 5) { k = 16; }
            else if(i == 6) { k = 32; }
            CheckMin(Hours, n , i, M_num+1, total + k);
        }
    }
    
    vector<string> readBinaryWatch(int num) {
        CheckHour(num, 0 , 0 ,0);
        return ans;
    }
};
