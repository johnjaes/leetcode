public class Solution {
    public string ToGoatLatin(string S) {
        string ans = "";
        
        string[] each_part = S.Split(' ');
        
        int co = 1;
        foreach(string item in each_part)
        {
            string new_one = "";
            if(item[0] == 'a' || item[0] == 'e' || item[0] == 'i' || item[0] == 'o' || item[0] == 'u' || item[0] == 'A' || item[0] == 'E' || item[0] == 'I' || item[0] == 'O' || item[0] == 'U')
            {
                for(int loop = 0 ; loop < item.Count() ; loop++)
                {
                    new_one += item[loop];
                }
            }
            else
            {                
                for(int loop = 1 ; loop < item.Count() ; loop++)
                {
                    new_one += item[loop];
                }
                new_one += item[0];                
            }
            new_one += "ma";
            for(int i = 0 ; i < co ; i++)
            {
                new_one += "a";
            }
            
            if(ans == "") { ans = new_one; }
            else { ans += " " + new_one; }
            
            co++;
        }       
        
        return ans;
    }
}
