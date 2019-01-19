class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        char plus = '0'; 
        for(int i = 0 ; i < a.size()/2 ; i++)
        {
            swap(a[i] , a[a.size() - 1 - i]);
        }
        for(int i = 0 ; i < b.size()/2 ; i++)
        {
            swap(b[i] , b[b.size() - 1 - i]);
        }
        for(int i = 0 ; i < a.size() || i < b.size() ; i++ )
        {
            int count = 0;
            if(i < a.size())
            {
                if(a[i] == '1') { count++; }
            }
            if(i < b.size())
            {
                if(b[i] == '1') { count++; }
            }
           
            if(plus == '1') { count++; }
            if(count >= 2) { plus = '1'; }
            else { plus = '0'; }
            if(count % 2 == 0) { ans.insert(0,"0"); }
            else { ans.insert(0,"1"); }            
        }
        if(plus != '0') { ans.insert(0,"1"); }
        
        return ans;
    }
};
