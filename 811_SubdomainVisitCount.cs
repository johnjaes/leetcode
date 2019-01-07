public class Solution {
    public IList<string> SubdomainVisits(string[] cpdomains) {
        Dictionary<string , int> ans = new Dictionary<string , int>();
        foreach(string each_str in cpdomains)
        {
            string[] part_str = each_str.Split(' ');
            string[] zone_str = part_str[1].Split('.');
            string link_str = "";
            for(int i = zone_str.Count() - 1 ; i >= 0 ; i--)
            {
                if(link_str == ""){ link_str = zone_str[i]; }
                else { link_str = zone_str[i]+"."+link_str; }
                if(ans.ContainsKey(link_str) == false)
                {
                    ans[link_str] = 0;
                }
                ans[link_str] += Convert.ToInt32(part_str[0]);
            }            
        }
        List<string> final = new List<string>();
        foreach(KeyValuePair<string , int> fin in ans)
        {
            final.Add(fin.Value.ToString() +" "+ fin.Key);
        }
        return final;
    }
}
