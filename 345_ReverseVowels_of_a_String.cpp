class Solution {
public:
    string reverseVowels(string s) {
        int i = 0;
        int j = s.size() - 1;
        while(i < j)
        {
            bool left_ch = false;
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                left_ch = true;
            }
            bool right_ch = false;
            if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' || s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U')
            {
                right_ch = true;
            }
            if(left_ch == true && right_ch == true)
            {
                swap(s[i] , s[j]);
                i++;
                j--;
            }
            if(left_ch == false) { i++; }
            if(right_ch == false) { j--; }
        }
        return s;
    }
};
