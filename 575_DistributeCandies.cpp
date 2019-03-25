class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        sort(candies.begin() , candies.end());
        int type_num = 1;
        for(int i = 1 ; i < candies.size() ; i++)
        {
            if(candies[i] > candies[i-1])
            {
                type_num++;
            }
        }
        return type_num > candies.size()/2 ? candies.size()/2 : type_num;
    }
};
