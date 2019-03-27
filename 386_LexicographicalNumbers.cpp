class Solution {
public:
    vector<int> lexicalOrder(int n) {
        map<string , int> sort_list;
        for(int i = 1 ; i <= n ; i++)
        {
            char buffer[10];
            sprintf(buffer , "%d" , i);
            string kk(buffer);
            sort_list[kk] = true;
        }
        vector<int> ans;
        for(map<string , int>::iterator it = sort_list.begin() ; it != sort_list.end() ; it++)
        {
            int kk = atoi(it->first.c_str());
            ans.push_back(kk);
        }
        return ans;
    }
};
