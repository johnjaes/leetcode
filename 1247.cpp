public class Solution {
    public int MinimumSwap(string s1, string s2) {
        int xy_num = 0;
        int yx_num = 0;
        for(int i = 0 ; i < s1.Length; i++)
        {
            if(s1[i] != s2[i])
            {
                if(s1[i] == 'x') { xy_num++; }
                else { yx_num++; }
            }
        }
        int ans = 0;
        ans += xy_num / 2;
        ans += yx_num / 2;
        xy_num %= 2;
        yx_num %= 2;
        if( (xy_num + yx_num) == 2 ) { ans += 2;  }
        else if( (xy_num + yx_num) %2 == 1 ) { return -1;  }        
        return ans;
    }
}
