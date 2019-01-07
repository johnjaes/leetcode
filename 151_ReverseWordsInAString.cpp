public class Solution {
    public string ReverseWords(string s) {
        string[] each_part = s.Split(' ');            
        string ans = "";
        bool first_word = true;
        for (int i = each_part.Count() - 1; i >= 0; i--)
        {                
            if(each_part[i] == "") { continue; }
            if (first_word == false) { ans += " "; }
            else { first_word = false; }
            ans += each_part[i];
                
        }
        return ans;
    }
}
