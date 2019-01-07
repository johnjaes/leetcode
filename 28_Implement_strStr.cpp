class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() == 0){ return 0;}
        for(int i = 0 ; haystack.size() ; i++)
        {
            if(i + needle.size() > haystack.size()){return -1;}
            for(int j = 0 ; j < needle.size() ; j++)
            {
                if(haystack[i + j] != needle[j]){ break; }
                if(j == needle.size() - 1){ return i;}
            }
        }
        return -1;
    }
};
