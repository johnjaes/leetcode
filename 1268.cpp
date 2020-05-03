class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(), products.end());        
        vector<vector<string>> ans;
        for(int i = 0 ; i < searchWord.length() ; i++)
        {
            vector<string> part_ans;
            vector<string> new_products;
            for(int j = 0 ; j < products.size() ; j++)
            {
                if(products[j].length() > i)
                {
                    if(products[j][i] == searchWord[i])
                    {                        
                        new_products.push_back(products[j]);
                        if(part_ans.size() < 3) 
                        {
                            part_ans.push_back(products[j]); 
                        }
                    }                    
                }                                
            }
            ans.push_back(part_ans);
            products = new_products;
        }
        return ans;
    }
};
